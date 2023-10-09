#include <stdio.h>
int main(){
    int a;// Подряд идущие 
    int newDigit;//элемент последовательности
    int Sum;//Сумма
    int counter = 1;//Счётчик подряд идкщих
    int previous;//Предыдущее
    scanf("%d",&a);
    while (counter != a){
        scanf("%d",&newDigit);
        if (newDigit < 0){
            Sum += newDigit;
        }else{
            Sum = 0;
        }
        if (previous * newDigit > 0){
            counter += 1;
        }else{
            counter = 1;
        }
        previous = newDigit;
    }
    printf("%d\n", Sum);
    return 0;
}