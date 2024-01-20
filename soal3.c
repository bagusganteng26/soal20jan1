#include <stdio.h>

int kecil(int arr[], int index){
    int sar = arr[0];
    for(int i = 0; i < index-1; i++){
        if(arr[i] > sar){
         sar = arr[i];
        }
    }
    printf("angka terbesar ke dua adalah %d", sar);
}
int main(){
    int arr[] = {99, 23, 220, 1 , 22, 150, 1945};
    int index = sizeof(arr) / sizeof(arr[0]);
    kecil(arr, index);

return 0;
}
