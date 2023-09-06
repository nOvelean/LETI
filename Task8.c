#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double f1 = (1 + sqrt(5))/2;
    double f2 = (1 - sqrt(5))/2;
    printf("f1, f2 = %f, %f\n",f1,f2);
    int Fib = (pow(f1,n) - pow(f2,n))/sqrt(5);//Можно было сделать адекватно, но хотелось экспериментов. Это формула Бине для n-ого члена последовательности фибоначчи
    printf("%d\n",  Fib);
    //Максимум который можно вычислить в int и %d это 46. При 47 случается переполнение. При %u скорее всего 47.  
    return 0;
}