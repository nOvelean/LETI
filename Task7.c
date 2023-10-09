#include <stdio.h>
int abs(int x) { if (x < 0) { return -1*x; } else { return x; } }
int main(){
    int B;
    int i;
    int sum = 0;
    int newDidit;
    int maxABS = 0;
    int maxABSindex = 0;
    scanf("%d",&B);
    while (1 > 0){
        scanf("%d",&newDidit);
        if (newDidit == 0){
            break;
        }
        if (newDidit < B){if (newDidit > -B){
            sum += newDidit;
            if (abs(newDidit) > maxABS){maxABS = abs(newDidit); maxABSindex = i;}
        }}
        i ++;
    }
    printf("Sum: %d\n",sum);
    printf("Max ABS: %d\n",maxABS);
    printf("Max ABS index: %d\n",maxABSindex);//индексация идёт от нуля
    return 0;
}