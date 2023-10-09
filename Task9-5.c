#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int min(int a, int b){if(a < b){return a;}else{return b;}}
int main(){
    int n,m;
    puts("Number of strings: ");
    scanf("%d",&n);
    puts("Number of rows: ");
    scanf("%d",&m);
    srand(time(NULL));
    int **m1 = (int**)malloc(n*sizeof(int*));
    for (int i=0; i<n; i++){
        m1[i] = (int*)malloc(m*sizeof(int));
        for (int j=0; j<m; j++){
            if(rand()%2 == 0){
                m1[i][j] = rand()%100;
            }else{
                m1[i][j] = -rand()%100;
            }
        }
    }
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    int *ret_array = (int*)malloc(m*sizeof(int));
    for (int j = 0; j<m; j++){
        int min_element = 100;
        for (int i=0; i<n; i++){
            min_element = min (min_element, m1[i][j]);
        }
        ret_array[j] = min_element;
    }
    printf("Return : \n");
    for (int j = 0; j < m;j++){
        printf("%d ", ret_array[j]);
    }
    free(m1);
    free(ret_array);
    return 0;
}