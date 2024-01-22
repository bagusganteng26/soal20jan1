#include <stdio.h>

int main(){
    int aa[] = {1, 12, 5, 12, 4, 5, 78};
    int la = sizeof(aa) / sizeof(aa[0]);
    int bb[] = {1, 3, 5, 7, 9};
    int lb = sizeof(bb) / sizeof(bb[0]);

    for(int i = 0; i < la - 1; i++){
        printf("%d\t", aa[i]);
    }
}