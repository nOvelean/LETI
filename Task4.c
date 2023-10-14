#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m,k;
    puts("Enter the size:");
    scanf("%d %d", &n, &m);
    puts("Enter the border");
    scanf("%d", &k);
    puts("Enter array");
    int **arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        arr[i] = (int*)malloc(m * sizeof(int));
        for (int j = 0; j < m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] < 0){
                for (int l = k; l < m; l++){
                    arr[i][l] = 0;
                }
            }
        }
    }
    puts("Final Array");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
