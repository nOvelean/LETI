#include <stdio.h>
#define __max(a,b) (((a) > (b)) ? (a) : (b))
int in_dividers(char dividers[], int length, char sym){
    for (int j = 0; j < length; j++){
        if (sym == dividers[j]) {return 0;}
    }
    return 1;
}
int main(){

    char string[1024];
    puts("String ");
    scanf("%s", string);
    int k;
    puts("dividers ammount");
    scanf("%d",&k);
    puts("dividers");
    char dividers[k];
    scanf("%s", dividers);
    int state = 0;
    int count = 0;
    int max_count = 0;
    int answer = 0;
    int i = 0;
    while (i < sizeof(string)/sizeof(string[0])){
        switch (state)
        {
        case 0:
            if (in_dividers(dividers, k, string[i]) == 0){
                state = 1;
                break;
            }
            count += 1;
            max_count = __max(max_count, count);
            i ++;
            break;
        case 1:
            if (in_dividers(dividers, k, string[i])){state = 1; break;};
            i ++;
        default:
            break;
        }
    }
    while (i < sizeof(string)/sizeof(string[0])){
        switch (state)
        {
        case 0:
            if (in_dividers(dividers, k, string[i]) == 0){
                state = 1;
                break;
            }
            count += 1;
            if (count == max_count){
                answer ++;         
            }
            i ++;
            break;
        case 1:
            if (in_dividers(dividers, k, string[i])){state = 1; break;};
            i ++;
        default:
            break;
        }
    }
    return 0;
}