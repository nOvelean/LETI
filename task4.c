#include <stdio.h>
#include <string.h>
int main(){
    int buffer[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int a[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int result[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//Допущение, что мы не можем вводить отрицательные числа
    char input[20];
    int minus = 0;
    int notZero = 0;
    printf("Type a number\n");
    scanf("%s", input);
    for (int i = strlen(input) - 1; i >= 0; i--){
        a[strlen(input) - 1 - i] = input[i] - '0';
    }
    
    printf("Type b number\n");
    scanf("%s", input);
    for (int i = strlen(input) - 1; i >= 0; i--){
        b[strlen(input) - 1 - i] = input[i] - '0';
    }

    for (int i = 29; i >= 0; i--){//гарантируем, что a>b при вычислениях
        if (a[i] < b[i]){
            for (int j = 0; j < 20; j++){
                buffer[j] = b[j];
            }
            for (int j = 0; j < 20; j++){
                b[j] = a[j];
            }
            for (int j = 0; j < 20; j++){
                a[j] = buffer[j];
            }
            minus = 1;
            break;
        }else{
            if (a[i] > b[i]){
                break;
            }
        }
    }
    for (int i = 0; i < 30; i++){
        if (a[i] - b[i] + result[i] < 0){
            result[i] = result[i] + a[i] + b[i] + 10;
            result[i + 1] -= 1;
        }else{
            result[i] = a[i] - b[i] + result[i];
        }
    }
    printf("retArray:");
    if (minus == 1){
        printf("-");
    }
    for (int i = 29; i >= 0; i--){
        if (result[i] == 0 && notZero){
        printf("%d", result[i]);
        }else{
            if (result[i] != 0){
                notZero = 1;
                printf("%d", result[i]);//Украшение
            }
        }
    }
}