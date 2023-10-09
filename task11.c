#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0; i < n; i++){
        scanf("%d",&array[i]);
    }
    for (int i=0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (array[i] == array[j]){
                printf("value: %d index: %d, %d", array[i], i, j);
                return 0;
            }
        }
    }
    return 0;
}