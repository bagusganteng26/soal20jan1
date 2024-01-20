#include <stdio.h>

int kecil(int arr[], int index){
    int cil = arr[0];
    for(int i = 0; i < index-1; i++){
        if(arr[i] < cil){
            cil = arr[i];
        }
    }
    printf("angka terkecil adalah %d", cil);
}
int main(){
    int arr[] = {43, 7, 1, 77, 53, 87};
    int index = sizeof(arr) / sizeof(arr[0]);
    kecil(arr, index);

return 0;
}
