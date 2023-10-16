#include <stdio.h>
void print_string(int arr [], int length){
    for (int i = 0; i < length;i++){
        printf("%d ",arr[i]);
    }
}
int counter_even(int arr [], int length){
    int count = 0;
    for (int i = 0; i < length;i++){
        if (arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}
int main(){
    int n,k;
    printf("Welcome, enter count of strings:");
    scanf("%d",&n);
    printf("enter count of even numbers: ");
    scanf("%d",&k);
    int Temp_String[100];
    int lenString = 0;
    printf("Enter string value: ");
    do{
        scanf("%d",&Temp_String[lenString]);
        lenString++;
    }while (Temp_String[lenString - 1] >= 0);
    
    int array[n][lenString];
    for (int j = 0; j < lenString; j++){
        array[0][j] = Temp_String[j];
    }
    for (int i = 1; i < n;i++){
        printf("Enter string value: ");
        for (int j = 0; j <lenString; j++){
            scanf("%d",&array[i][j]);
        }
    }
    printf("\nArray:");
    for (int i = 0; i < n; i++){
        printf("\n______");
        for (int j = 0; j < lenString; j++){
            printf("%d ", array[i][j]);
        }
    }
    printf("\n");
    for (int j = 0; j < lenString; j++){
        int count = 0;
        int Temp_arr[n];
        for (int i = 0; i < n; i++){
                Temp_arr[i] = array[i][j];
        }
        count = counter_even(Temp_arr, n);
        if (count == k){
            printf("\n_________");
            print_string(Temp_arr, n);
        }
    }
    return 0;
}