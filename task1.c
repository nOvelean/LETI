#include <stdio.h>
int main(){
    int array[100];
    int Firstborder, Secondborder;
    int array_size = 0;
    int previous = 0;
    int buffer;
    while(1 > 0){
        scanf("%d", &array[array_size]);
        if (array[array_size] * previous >= 0){
            previous = array[array_size];
            array_size++;
        }else{
            array_size++;
            break;
        }
    }
    if (array_size % 2 == 0){
        Firstborder = array_size / 2 - 1;
        Secondborder = array_size / 2;
    }else{
        Firstborder = array_size / 2 - 1;
        Secondborder = array_size / 2 + 1;
    }
    for (int i = 0; i <= Firstborder / 2; i++){
        buffer = array[i];
        array[i] = array[Firstborder - i];
        array[Firstborder - i] = buffer;
    }
    for (int i = Secondborder; i < array_size; i++){
        if (array[i] % 2 == 0){
            for (int j = i; j < array_size; j++){
                array[j] = array[j + 1];
            }
            array_size --;
            i --;
        }
    }
    printf("retArray:");
    for (int i = 0; i < array_size; i++){
        printf(" %d", array[i]);
    }
    return 0;
}