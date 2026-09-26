#include <stdio.h>

int main() {
    int harga, pilihan, jumlah, subtotal, total = 0;
    char lanjut = 'y';

    do {
        printf("================================\n");
        printf("   MUFALAH NONK'S COFFEESHOP\n");
        printf("================================\n");
        printf("Total Belanja sementara : Rp. %d\n", total);
        printf("Menu Makanan & Minuman :)\n");
        printf("--------------------------------\n");
        printf("1. Mie Ayam           Rp. 10.000\n");
        printf("2. Nasi Goreng        Rp. 15.000\n");
        printf("3. Es Teh Manis       Rp. 5.000\n");
        printf("4. Kopi Susu          Rp. 8.000\n");
        printf("5. Susu Murni         Rp. 15.000\n");
        printf("0. Selesai Belanja\n");
        printf("Pilih Menu Anda (0-5) : ");
        scanf("%d", &pilihan);

        if (pilihan == 0) {
            break;
        }

        switch (pilihan) {
            case 1:
                harga = 10000;
                break;
            case 2:
                harga = 15000;
                break;
            case 3:
                harga = 5000;
                break;
            case 4:
                harga = 8000;
                break;
            case 5:
                harga = 15000;
                break;
            default:
                printf("Pilihan tidak valid!\n");
                continue;
        }

        printf("Masukkan jumlah pesanan : ");
        scanf("%d", &jumlah);
        subtotal = harga * jumlah;
        total += subtotal;

        printf("Anda membeli %d item dari menu No. %d\n", jumlah, pilihan);
        printf("-----------------------------------\n");
        printf("Mau beli lagi ga bang/mbak (y/n) : ");
        scanf(" %c", &lanjut);

    } while (lanjut == 'y' || lanjut == 'Y');

    printf("====================================\n");
    printf("Total Belanja Sementara : Rp. %d\n", total);
    printf("====================================\n");

    if (total == 0) {
        printf("Anda tidak membeli apapun, program selesai :(\n");
        return 0;
    }

    int uang, kembalian;

    do {
        printf("\nMasukkan uang yang cukup dengan total belanja Rp. %d: ", total);
        scanf("%d", &uang);

        if (uang < total) {
            printf("Uang tidak cukup, masukkan uang lagi.\n");
        }
    } while (uang < total);

    kembalian = uang - total;

    printf("Pembayaran Berhasil!\n");
    printf("==================================\n");
    printf("Total Belanja   : Rp. %d\n", total);
    printf("Uang Dibayar    : Rp. %d\n", uang);
    printf("Kembalian       : Rp. %d\n", kembalian);
    printf("==================================\n");

    return 0;
}