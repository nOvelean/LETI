#include <stdio.h>
#include <string.h>
int main(){
    int a[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int b[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int result[21] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char input[20];
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

    for (int i = 0; i < 20; i++){
        if (a[i] + b[i] + result[i] > 9){
            result[i] = (result[i] + a[i] + b[i]) % 10;
            result[i + 1] += 1;
        }else{
            result[i] = a[i] + b[i] + result[i];
        }
    }
    int notZero = 0;
    printf("retArray:");
    for (int i = 20; i >= 0; i--){
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