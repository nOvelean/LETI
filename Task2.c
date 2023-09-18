#include <stdio.h>
int main(){
    int n,k;
    printf("Welcome, enter count of strings:");
    scanf("%d",&n);
    printf("enter count of even numbers: ");
    scanf("%d",&k);
    int array[n][10];
    int lenString = 1;
    int j = 0;
    for (int i = 0; i < n;i++){
        printf("Enter string value: ");
        j = 0;
        lenString = 1;
        scanf("%d",&array[i][j]);
        while (array[i][j] >= 0){
            j ++;
            lenString ++;
            scanf("%d",&array[i][j]);
        }
    }
    printf("retArray: ");
    for (int j = 0; j < lenString; j++){
        int count = 0;
        for (int i = 0; i < n; i++){
            if (array[i][j] % 2 == 0){
                count ++;
            } 
        }
        if (count == k){
            printf("\n_________");
            for (int i = 0; i < n; i++){
                printf("%d ", array[i][j]);
            }
        }
    }
    printf("\nArray:");
    for (int i = 0; i < n; i++){
        printf("\n______");
        for (int j = 0; j <lenString; j++){
            printf("%d ", array[i][j]);
        }
    }
    return 0;
}