#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    for (int i =0; i < n; i++){
        int B = 0;
        for (int j  = 0; j < m; j ++){
            if (m1[i][j] < 0){
                B ++;
            }
        }
        printf("B_%d = %d ", i + 1, B);
    }
    free(m1);
    return 0;
}