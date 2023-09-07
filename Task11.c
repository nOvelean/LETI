#include <stdio.h>
int min(int a, int b) { if (a < b) return a; else return b; }
int max(int a, int b) { if (a > b) return a; else return b; }
int NOD(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
int main(){
    int a, b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    a = min(a,b);
    b = max(a,b);
    int gcd = NOD(a,b);
    if (gcd != 1){
        printf("Not an Answer: %d\n", gcd);
    }else{
        printf("Answer");
    }
    //printf("%d",NOD(5,7));
    return 0;
}