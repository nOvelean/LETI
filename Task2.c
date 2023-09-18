#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
#include <string.h>
int atoi(char string[]){
    int result = 0;
    for (int i = 0; i < strlen(string);i++){
        result += pow(10, strlen(string) - i - 1) * (string[i] - '0');
    }
    return result;
}
int main(){
    printf("%d\n",atoi("123"));
    int n;
    printf("Welcome, enter count of strings:");
    scanf("%d",&n);
    int array[n][10];
    char enterString[20];
    int lenString;
    char delim[] = " ";
    for (int i = 0; i < n;i++){
        scanf("%s", enterString);
        printf("%s", enterString);
        char * split_enterString = strtok(enterString, delim);
        printf("work, string %d\n", i + 1);
        int j = 0;
        while (split_enterString != NULL){
            array[i][j] = atoi(split_enterString);
            printf("%d", array[i][j]);
            j ++;
            split_enterString = strtok(NULL, delim);
            printf("%s\n", split_enterString);
            lenString = strlen(split_enterString);
            printf("%d",array[i][j]);
        }
    }
    printf("\n Array:");
    for (int i = 0; i < n; i++){
        for (int j = 0; j <lenString; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}