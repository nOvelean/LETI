#include <stdio.h>
int main(){
    int n, a;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    printf("Task a: ");
    int i=0;
    while(arr[i] < a){//Ну хз. Цикл while включает в себя оператор if, но не явно. Собственно как и for. Я не понял условие задачки
        printf("%d ",arr[i]);
        i++;
    }
    printf("Task b: ");
    printf("%d < %d < %d", arr[i - 1], a, arr[i]);
    //А дальше хз.
    return 0;
}