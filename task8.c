#include <stdio.h>
int main(){
    int m,k,s; // условие
    int n; //Нам опять не дали условия на массив, поэтому считаем, что мы знаем его размер.
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input k: ");
    scanf("%d",&k);
    printf("Input s: ");
    scanf("%d",&s);
    if (s + m + 1 > n){
        printf("Error s + m + 1 > n\n");
    }
    int buffer[m];
    for (int i = 0; i < m; i++){
        buffer[i] = arr[i + k];
    }
    for (int i = k + m; i < s + m; i++){
        arr[i - m] = arr[i];
    }
    for (int i = 0; i < m; i++){
        arr[s + i] = buffer[i];
    }
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
    //Оно работает и это ЧУДО. Творожок такой, кстати.
}