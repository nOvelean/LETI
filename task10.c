#include <stdio.h>
int main(){
    int n;
    int last_index = 0;
    scanf("%d",&n);
    int array[n];
    for (int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    for (int i=0; i< n - 1; i++){
        if (array[i] % 2 == 0 && array[i + 1] % 2 == 0){
            last_index = i;
        }
    }
    printf("Answer: %d\n",last_index);
    for (int i=0; i< last_index; i++){
        printf("%d ",array[i]);
    }
    return 0;
}