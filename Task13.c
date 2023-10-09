#include <stdio.h>
int main(){
    int count = 0;
    int newDigits = 1;
    int flag = 1;
    while (newDigits != 0)
    {
        scanf("%d", &newDigits);
        for (int i = 2; i <= newDigits / 2; ++i) {
        if (newDigits % i == 0) {
            flag = 1;
            break;
            }
        }
        if (newDigits == 0 || newDigits == 1){
            flag = 1;
        }
        if (flag == 0) {
            count++;
        }else{
            flag = 0;
        }
    }
    printf("count: %d\n", count);
    return 0;
}