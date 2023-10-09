#include <stdio.h>
int max(int a, int b){if(a < b){return b;}else{return a;}}
int min(int a, int b){if(a > b){return b;}else{return a;}}
int main(){
    int newDigit;
    int maxD = -1410065408;
    int minD = 1410065408;
    while (1>0){
        scanf("%d",&newDigit);
        if (newDigit == 0){
            break;
        }
        minD = min(newDigit, minD);
        maxD = max(newDigit, maxD);
    }
    printf("%d\n", minD);
    printf("%d\n", maxD);
    printf("%d\n", maxD - minD);
    return 0;
}