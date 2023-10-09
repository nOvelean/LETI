#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int SumDividers;
    scanf("%d",&n);
    for (int i=1; i<=n/2; i++){
        if (n % i == 0){
            //printf("%d", i);
            SumDividers += i;
        } 
    }
    printf("%d\n",SumDividers);
    if (SumDividers >= n){
        printf("not Absolute not Answer\n");
    }else{
        printf("I'm Absolute Answer\n");
    }
    //printf("%d", (int)sqrt(6));
    return 0;
}