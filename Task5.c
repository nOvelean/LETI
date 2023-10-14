#include <stdio.h>
int main(){
    int n,m;
    puts("Size");
    scanf("%d %d",&n,&m);
    int arr[n + 1][m + 1];
    puts("Array: ");
    for (int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<m; j ++){
            int temp;
            scanf("%d", &temp);
            arr[i][j] = temp;
            if (temp == 0){
                count ++;
            }
        }
        arr[i][m] = count;
    }
    for (int j = 0; j < m; j++){
        int count = 0;
        for (int i=0; i<n; i++){
            if (arr[i][j] == 0){count ++;}
        }
        arr[n][j] = count;
    }
    for (int i = 0; i < n + 1; i++){
        for (int j = 0; j < m + 1; j++){
            if (i != n || j != m){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}