/*Nama file : FaktorBil.c */
/*Deskripsi : menentukan faktor-faktor bilangan dari bilangan integer sembarang */
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
    for(i=1; N%i==0; i++){
    printf("%d", i);
    }
    return 0;
    }
}
