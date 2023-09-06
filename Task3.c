#include <stdio.h>
int main(){
    int sum;
    int lastSum;
    int previous;
    int a;
    int counter = 0;
    int newDigit;
    printf("Count of sign changing:");
    scanf("%d",&a);
    while (counter != a){
        printf("Element:");
        scanf("%d",&newDigit);
        //printf("%d",newDigit * -1);
        if (newDigit * previous < 0){
            //printf("Change\n");
            counter += 1;
        }
        previous = newDigit;
        if (newDigit < 0){
            sum += newDigit;
        }else{
            lastSum = sum;
            sum = 0;
        }
    }
    printf("sum = %d\n",lastSum);
    return 0;
}