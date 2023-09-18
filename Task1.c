/*Пример ввода: 
4           
1 2 3 -4
4 5 8 9
1 2 5 4
71 62 75 14
*/
#include <stdio.h>
#include <stdlib.h>
int Mymax(int a, int b){if (abs(a) < abs(b)){return abs(b);}else {return abs(a);}}

int main(){
    int n;
    scanf("%d",&n);
    int count = 1000000;
    int array[10][n];
    int i = 0;
    while (i < count){
        if (i == 0){
            count = 0;
        }
        for (int j=0; j<n; j++){
            scanf("%d",&array[i][j]);
            if (i == 0){
                count = Mymax(count,array[i][j]);
            }
        }
        i++;
    }
    printf("count = %d\n",count);
    printf("Array:");
    for (int i = 0; i < count; i++){
        printf("\n______");
        for (int j = 0; j <n; j++){
            printf("%d ", array[i][j]);
        }
    }
    int retArray[n][count];
    int condition = 1;
    int retArray_i = 0;
    for (int i = 0; i < count; i++){
        condition = 1;
        for (int j = 0; j < n; j++){
            if (j % 2 != 0){//Не очень понятно, в условии считается порядок с нуля или с единицы. В данном случае, \n
                if (array[i][j] % 2 != 0){//мы считаем, что отсчёт начинается с единицы. Если надо иначе, то поменять ! на =
                    condition = 0;
                }
            }
        }
        if (condition){
            for (int j = 0; j < n; j++){
                retArray[j][retArray_i] = array[i][n - j - 1];
            }
            retArray_i ++;
        }
    }
    printf("\nretArray_i = %d\n", retArray_i);
    printf("retArray: \n");
    for (int i = 0; i < count; i++){
        for (int j = 0; j < retArray_i; j++){
            printf("%d ", retArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}
