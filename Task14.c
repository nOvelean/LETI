#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n, &m);
    for (int i=n; i<=m; i++){
        for (int j=0; j<i; j++){
            printf("%d", i);
        }
    }
    return 0;
}