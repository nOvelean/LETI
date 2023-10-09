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
    int *m2 = (int*)malloc(n*m*sizeof(int*));
    for (int i = 0; i < n; i++){
        for (int j=0; j< m; j ++){
            m2[j + m*i] = m1[i][j]; 
        }
    }
    for (int i = 0; i < n*m; i ++){
        printf("%d ", m2[i]);
    }
    free(m1);
    free(m2);
    return 0;
}