#include <stdio.h>
int main(){
    int Mult = 1;// Результат 
    int preSum = 0;// Сумма предыдущих
    int newDigit;// Элемент последовательности
    while (1>0){
        scanf("%d",&newDigit);
        if (newDigit >= preSum){
            Mult *= newDigit;
            preSum += newDigit;
        }else{
            Mult *= newDigit;
            break;
        }
    }
    printf("Mult = %d\n",Mult);
    return 0;
}
//Хоть в задании и написано, что данные - это целые числа, он мне сказал, что числа положительные. Кому верить хз.