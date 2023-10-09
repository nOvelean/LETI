#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int answer = 0;
    for (int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    for (int i=0; i<n - 2; i++){
        if (array[i] < array[i + 1] && array[i + 1] > array[i + 2]){
            answer = i;
            break;
        }
    }
    printf("answers index: %d, %d, %d\n", answer, answer + 1, answer + 2);
    return 0;
}