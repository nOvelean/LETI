#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char str[100] = "100 120";
    char delim[] = " ";
    char * ptr = strtok(str, delim);
    while(ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, delim);
	}
    printf("%d", atoi(str));
    return 0;
}