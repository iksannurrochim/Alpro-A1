/*Nama file : CekPrima.c */
/*Deskripsi : untuk mengetahui bilangan integer yang dimasukkan termasuk bilangan prima atau bukan */
/*Pembuat : Iksan Nur Rochim - 24060121120013 */
/*Tgl pembuatan : Sabtu, 18 Maret 2022 18:56 WIB */
#include <stdio.h>
#include <stdlib.h>

int main()
{
//kamus
    int N;
    int i;

//Algoritma
    printf("masukkan bilangan : ");
    scanf("%d", &N);
    if(N<=0){
        printf("N harus positif");
    }else{

    for(i=2; N%i==0; i++){
            for(i=2; N%i==0; i++){
                printf("Bukan bilangan prima");
            {
            }
                printf("Bilangan Prima");
            }

    }
    return 0;
    }

{
}
}
