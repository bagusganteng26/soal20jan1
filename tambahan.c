#include <stdio.h>
int main(){
    int arr[] = {1, 3, 4, 6, 3, 6};
    int lenga = sizeof(arr) / sizeof(arr[0]);
    int wes[] = {1, 2, 3, 4, 5, 6};
    int lengb = sizeof(wes) / sizeof(wes[0]);

    for(int i = 0; i < lenga; i++){
        for(int j = i + 1; j < lengb; j++){
            if(arr[j] == arr[i]){
                printf("%d\t", arr[i]);
            }
        }
    }
    printf("\n");
    for(int h = 0; h < lengb; h++){
        printf("%d\t", wes[h]);
    }
    return 0;
}