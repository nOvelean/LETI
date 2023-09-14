#include <stdio.h>
#include <string.h>
int main(){
    char n[1000];
    int answer = 0;
    scanf("%s",&n);
    int Numbers[10] = {0,0,0,0,0,0,0,0,0,0};
    for (int i=0; i<strlen(n); i++){
        Numbers[n[i] - '0'] += 1;
    }
    for (int i = 0; i < 10; i++){
        if (Numbers[i] != 0){
            answer += 1;
        }
    }
    printf("Answer: %d\n", answer);
    return 0;
}