#include <stdio.h>
#include <math.h>
//int max(int a, int b){if (a < b){return b;}else{return a;}}
int main(){
    int n;
    int answer1;
    int count = 0;
    int maxcount = 0;
    int newDigit;
    int previous = -pow(2,31);
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%d", &newDigit);
        if (newDigit >= previous){
            count ++;
        }else{
            maxcount = fmax(maxcount, count);
            if (count != 1){
            answer1 ++;
            }
            count = 1;

        }
        previous = newDigit;
    }
    if (newDigit >= previous){
            answer1 ++;
        }
    if (n == 1){
        answer1 = 1;
        maxcount = 1;
    }
    printf("answer1 = %d\n", answer1);
    printf("maxcount = %d\n", maxcount);
    return 0;
}