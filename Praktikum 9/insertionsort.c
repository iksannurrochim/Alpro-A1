/*nama file : insertionsort*/
/*deskripsi : mengurutkan data dengan insertion sort*/
/*pembuat   : iksan nur rochim - 24060121120013*/
/*tgl pembuatan : 5 Mei 2022*/
#include <stdio.h>

void insertionsort(int array[], int n)
{
//kamus lokal
    int i, temp, j;

//algoritma
    for(i=1; i<n; i++){
        temp = array[i];
        j = i-1;
        while (j>=0 && array[j]>temp){
            array[j+1] = array[j];
            j = j-1;
        }
        array[j+1] = temp;
    }
}

int main()
{
//kamus
    int i, n, array[] = {29, 10, 14, 30, 25, 50, 10, 5, 4, 1};

//algoritma
    n = sizeof(array)/sizeof(array[0]);
    insertionsort(array, n);
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
