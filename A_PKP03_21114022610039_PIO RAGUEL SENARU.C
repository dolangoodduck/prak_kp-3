#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void TebakAngka(int jawaban, int minimum, int maksimum, int *percobaan) {
    int tebakan;

    while (1) {
        printf("Masukan tebakan anda (%d - %d): ", minimum, maksimum);
        if (scanf("%d", &tebakan) != 1) {
            // Clear input buffer if user types letters
            while (getchar() != '\n');
            printf("Input tidak valid. Masukkan angka!\n");
            continue;
        }

        (*percobaan)++;

        if (tebakan < jawaban) {
            printf("Terlalu kecil, masukan lagi.\n");
        } else if (tebakan > jawaban) {
            printf("Terlalu besar, masukan lagi.\n");
        } else {
            printf("Selamat, anda berhasil menebak angka %d dalam %d percobaan.\n", jawaban, *percobaan);
            break;
        }
    }
}

void tampilkanHasil(int percobaan) {
    if (percobaan <= 5) {
        printf("Mantap! Anda sangat akurat.\n");
    } else if (percobaan <= 10) {
        printf("Bagus, tapi masih bisa lebih cepat.\n");
    } else {
        printf("Terlalu banyak percobaan!\n");
    }
}

void jalankanPermainan() {
    int minimum = 1;
    int maksimum = 1000;
    int percobaan = 0;

    int jawaban = (rand() % (maksimum - minimum + 1)) + minimum;

    printf("===================================================\n");
    printf("               PERMAINAN TEBAK ANGKA               \n");
    printf("===================================================\n");
    printf("Selamat bermain!\n");
    printf("Angka yang saya pilih antara %d dan %d.\n", minimum, maksimum);

    TebakAngka(jawaban, minimum, maksimum, &percobaan);

    tampilkanHasil(percobaan);

    printf("Angka yang benar adalah: %d\n", jawaban);
    printf("Jumlah percobaan: %d\n", percobaan);
}

int main(void) {
    srand((unsigned int)time(NULL));

    jalankanPermainan();

    return 0;
}
