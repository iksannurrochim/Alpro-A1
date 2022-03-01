/*Nama file : luasbujursangkar.c */
/*Deskripsi : menghitung luas bujung sangkar */
/*Pembuat : Iksan Nur Rochim - 24060121120013 */
/*Tgl pembuatan : Selasa, 1 Maret 2022 11:23 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
/*kamus*/
    int s;
    int l;

/*Algoritma*/
    printf("Masukkan nilai s untuk sisi = ");
    scanf("%d", &s);
    l = s*s;
    printf("Luas Bujursangkar = %d", l);
    return 0;
}
