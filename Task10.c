#include <math.h>
#include <stdio.h>
int main(){
    double a = 0.0;
    double b = 1.0;
    double fa = -1 + 2*a + pow(a,2)/2 + pow(a,3)/6 + pow(a,4)/24;
    double fb = -1 + 2*b + pow(b,2)/2 + pow(b,3)/6 + pow(b,4)/24;
    double x = 0;
    double fx = -1 + 2*x + pow(x,2)/2 + pow(x,3)/6 + pow(x,4)/24;
    double epsilon = 0.00000001;
    while (b - a >= epsilon)
    {
        x = (a + b)/2;
        fx = -1 + 2*x + pow(x,2)/2 + pow(x,3)/6 + pow(x,4)/24;
        if (fa*fx > 0){
            a = x;
        }else{
            b = x;
        }
    }
    
    printf("answer = %f, f(x) = %f\n", x, fx);
    return 0;
}