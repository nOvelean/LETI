#include <stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n){ // Можно сортировать подругому, но мне нравиться и помниться так. 
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}
void reversSelectionSort(int arr[], int n){ // Можно сортировать подругому, но мне нравиться и помниться так. 
    int i, j, max_idx;
    for (i = 0; i < n - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;
        swap(&arr[max_idx], &arr[i]);
    }
}
int main(){
    int array[1024], FirstPart[1024], SecondPart[1024];
    int newDigit = 0,n = 0;
    int Firstborder, Secondborder;
    while (newDigit != 99999){
        scanf("%d", &newDigit);
        array[n] = newDigit;
        n ++;
    }
    if (n % 2 == 0){
        Firstborder = n / 2 - 1;
        Secondborder = n / 2;
    }else{
        Firstborder = n / 2 - 1;
        Secondborder = n / 2 + 1;
    }
    for (int i = 0; i < Firstborder + 1; i++){
        FirstPart[i] = array[i];
    }
    for (int i = Secondborder; i < n; i++){
        SecondPart[i - Secondborder] = array[i];
    }
    // Далее много лишнего. Ну это так, для души и отладки. Я потратил на это час. bloodtrail
    printf("n = %d\n", n);
    printf("Array main: ");
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\nArray 1: ");
    for (int i = 0; i < Firstborder + 1; i++){
        printf("%d ", FirstPart[i]);
    }
    printf("\nArray 2: ");
    for (int i = Secondborder; i < n; i++){
        printf("%d ",SecondPart[i - Secondborder]);
    }
    selectionSort(FirstPart, Firstborder + 1);
    reversSelectionSort(SecondPart, n - Secondborder);
    printf("\nArray: ");
    for (int i = 0; i < Firstborder + 1; i++){
        printf("%d ", FirstPart[i]);
    }
    for (int i = Secondborder; i < n; i++){
        printf("%d ",SecondPart[i - Secondborder]);
    }
    return 0;
}