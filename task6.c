#include <stdio.h>
int main(){
    int n, lastElement, changed1, changed2; // Рахмер массива, так как в задаче не сказано про то, как вводиться массив, будем считать, что нам сначало напишут его размер.
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    changed1 = changed2 = arr[0];
    lastElement = arr[n - 1];
    for (int i = 0; i < n - 1; i++){
        changed1 = arr[i + 1];
        arr[i + 1] = changed2;
        changed2 = changed1;
    }
    arr[0] = lastElement;
    printf("\nArray: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}