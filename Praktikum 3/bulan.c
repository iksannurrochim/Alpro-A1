/*Nama file : bulan.c */
/*Deskripsi : menuliskan ke layar
nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12 yang dibaca dari masukan keyboard */
/*Pembuat : Iksan Nur Rochim - 24060121120013 */
/*Tgl pembuatan : Sabtu, 12 Maret 2022 06:260 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
//kamus
    int i;

//Algoritma
    printf("Masukkan angka 1-12: ");
    scanf("%d", &i);

    switch (i){
    case 1:
        printf("januari");
        break;
    case 2:
        printf("februari");
        break;
    case 3:
        printf("maret");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("mei");
        break;
    case 6:
        printf("juni");
        break;
    case 7:
        printf("juli");
        break;
    case 8:
        printf("agustus");
        break;
    case 9:
        printf("september");
        break;
    case 10:
        printf("oktober");
        break;
    case 11:
        printf("november");
        break;
    case 12:
        printf("desember");
        break;

    default:
        printf("masukan nomor bulan tidak tepat");
    }

    return 0;
}
