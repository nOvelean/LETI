#include <stdio.h>
#include <stdlib.h>
int main(){
    for (int n = 5; n < 16; n++){
        printf("\n");
        int *m1 = NULL;
        m1 = (int*)calloc(n, sizeof(int));
        if (m1 != NULL){
            for(int i=0; i<n; i++){
                printf("%d ", m1[i]);
            }
        }
    free(m1);
    }
    return 0;
}