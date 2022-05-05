/*nama file : bubbleSort*/
/*deskripsi : mengurutkan data dengan bubble sort*/
/*pembuat   : iksan nur rochim - 24060121120013*/
/*tgl pembuatan : 5 Mei 2022*/
#include <stdio.h>

void bubbleSort(int arr[])
{
//kamus lokal
    int i, j, temp;

//algoritma
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1; j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main(){
//kamus
    int i, arr[]={29, 10, 14, 30, 25, 50, 10, 5, 4, 1};

//algoritma
	printf("Sebelum Sorting : \n");
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	bubbleSort(arr);
	printf("\n\nSetelah Sorting : \n");
	for(i=0; i<10; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
