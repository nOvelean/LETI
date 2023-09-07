#include <stdio.h>
#include <math.h>
int main(){
    int sumDigits = 0;
    int Number;
    int TempNumber1, TempNumber2;
    int count = 0;
    scanf("%d",&Number);
    TempNumber1 = Number;
    TempNumber2 = Number;
    while(TempNumber1){
        TempNumber1/=10;
        count++;
    }
    while (TempNumber2 != 0)
    {
        sumDigits += pow(TempNumber2%10, count); 
        TempNumber2 /= 10;
    }
    if (sumDigits == Number){
        printf("answer - yes");
    }else{
        printf("answer - no, %d\n", sumDigits);
    }
    return 0;
}