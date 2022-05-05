/*nama file : selectionsort*/
/*deskripsi : mengurutkan data dengan selection sort*/
/*pembuat   : iksan nur rochim - 24060121120013*/
/*tgl pembuatan : 5 Mei 2022*/
#include <stdio.h>

void selectionsort(int array[], int n)
{
//kamus lokal
    int i, j, min, temp;

//algoritma
    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}

int main()
{
//kamus
    int i, n, array[] = {29, 10, 14, 30, 25, 50, 10, 5, 4, 1};

//algoritma
    n = sizeof(array)/sizeof(array[0]);
    selectionsort(array, n);
    for(i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
