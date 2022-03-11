/*Nama file : hari.c */
/*Deskripsi : menuliskan ke layar
nama-nama Hari dari nomor hari, yaitu 1 s.d. 7 yang dibaca dari masukan keyboard */
/*Pembuat : Iksan Nur Rochim - 24060121120013 */
/*Tgl pembuatan : Sabtu, 12 Maret 2022 06:21 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
//kamus
    int i;

//Algoritma
    printf("Masukkan angka 1-7: ");
    scanf("%d", &i);

    switch (i){
    case 1:
        printf("senin");
        break;
    case 2:
        printf("selasa");
        break;
    case 3:
        printf("rabu");
        break;
    case 4:
        printf("kamis");
        break;
    case 5:
        printf("jumat");
        break;
    case 6:
        printf("sabtu");
        break;
    case 7:
        printf("minggu");
        break;

    default:
        printf("masukan nomor hari tidak tepat");
    }

    return 0;
}
