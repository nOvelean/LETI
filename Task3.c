#include <stdio.h>
int max(int a, int b){if (a < b){return b;}else {return a;}}
int min(int a, int b){if (a < b){return a;}else {return b;}}
int main(){
    int n;
    scanf("%d",&n);
    int Array[50][n];
    int diff = 100000;
    int i = 0;
    int minArray = 10000;
    int maxArray = -100000;
    while (i < diff)
    {
        if (i == 0){diff = 0;}
        for (int j = 0; j < n; j++){
            scanf("%d", &Array[i][j]);
            minArray = min(minArray, Array[i][j]);
            maxArray = max(maxArray, Array[i][j]);
        }
        if (i == 0){
                diff = maxArray - minArray;
        }
        i ++;
    }
    printf("diff = %d\n", diff);
    printf("Array:");
    for (int i = 0; i < diff; i++){
        printf("\n______");
        for (int j = 0; j <n; j++){
            printf("%d ", Array[i][j]);
        }
    }
    printf("\nretArray: \n");
    for (int j = 0; j < n; j++){
        if (Array[diff - 1][j] % 2 != 0){
            for (int i = 0; i <diff; i++){
                printf("%d ", Array[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}