#include <stdio.h>

int cari(int arr[], int index, int luru){
    for(int i = 0; i < index-1; i++){
        if(arr[i] == luru){
            return i;
        }
    }
}

int main(){
    int arr[] = {3, 6, 1, 4, 7, 10, 66};
    int index = sizeof(arr) / sizeof(arr[0]);
    int luru;
    printf("Masukkan angka yang ingin di cari :");
    scanf("%d", &luru);

    int hasil = cari(arr, index, luru);
    printf("angka ditemukan di index ke %d", hasil);

    return 0;
}