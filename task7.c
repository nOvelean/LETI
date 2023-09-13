#include <stdio.h>
int main(){
    int n, k, lastElement, changed1, changed2; // n - Раpмер массива, так как в задаче не сказано про то, как вводиться массив, будем считать, что нам сначало напишут его размер.
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Number k: ");
    scanf("%d", &k);
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    changed1 = changed2 = arr[k];
    lastElement = arr[n - 1];
    for (int i = k; i < n - 1; i++){
        changed1 = arr[i + 1];
        arr[i + 1] = changed2;
        changed2 = changed1;
    }
    arr[k] = lastElement;
    printf("\nArray: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}