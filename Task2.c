#include <stdio.h>
int main(){
    int array[1000] = {0};
    int previous = 0;
    int newDigit = 0;
    int array_size = 0;
    int Firstborder;
    int Secondborder;
    int buffer = 0;
    while (1>0){
        scanf("%d", &newDigit);
        if (newDigit*previous >= 0){
            array[array_size] = newDigit;
            previous = newDigit;
            array_size++;
        }else{
            array[array_size] = newDigit;
            array_size++;
            break;
        }
    }
    printf("Array:");
    for (int i = 0; i < array_size; i++){
        printf(" %d", array[i]);
    }
    if (array_size % 2 == 0){
        Firstborder = array_size / 2 - 1;
        Secondborder = array_size / 2;
    }else{
        Firstborder = array_size / 2 - 1;
        Secondborder = array_size / 2 + 1;
    }
    for (int i = 0; i <= Firstborder; i++){
        if (array[i] % 2 != 0){
            for (int j = i; j < array_size; j++){
                array[j] = array[j + 1];
            }
            Firstborder --;
            Secondborder --;
            array_size --;
            i --;
        }
    }
    for (int i = Secondborder; i < array_size - 1; i += 2){
        buffer = array[i + 1];
        array[i + 1] = array[i];
        array[i] = buffer;
    }
    printf("\nretArray");
    for (int i = 0; i < array_size; i++){
        printf(" %d", array[i]);
    }
    return 0;
}