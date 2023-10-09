#include <stdio.h>
int main(){
    int n, First = 0, Last = 0;
    scanf("%d",&n);
    float array[n];
    for (int i=0; i<n; i++){
        scanf("%f",&array[i]);
    }
    for (int i=0; i<n; i++){
        if (array[i] < 0.0f && First == 0){
            First = i;
            Last = i;
        }else{
            if (array[i] < 0.0f){
                Last = i;
            }
        }
    }
    printf("after First: ");
    for(int i = First + 1; i < n; i++){//Мне кажется, что сам эллемент выводить не надо
        printf("%f ",array[i]);
    }
    printf("before Last: ");
    for (int i = Last - 1; i >= 0; i--){//тоже самое
        printf("%f ",array[i]);
    }
    //Чтобы выводить с крайним элементом убрать +1 и -1
    return 0;
}