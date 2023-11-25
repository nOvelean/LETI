#include <stdio.h>
#include <string.h>
void read_string(char *str, int length){
    int i = 0;
    while ((((*str = getchar()) != '\n') || (i == 0))&&(i < length - 1)){
        str++;
        i++;
    }
    *str = '\0';
}

int main(void){
    
    char *filename;
    filename = "C:/LabPrograming/Curs1/C++.txt";
    char buffer[256];
    char text_file[4096];
    char new_text_file[4096];
    int i = 0;
    int j = 0;
    FILE *fp = fopen(filename, "r");
    if(fp)
    {
        while((fgets(buffer, 256, fp))!=NULL)
        {
            //printf("%s", buffer);
            strncat(text_file, buffer, strlen(buffer));
        }
        fclose(fp);
        int state = 0;
        while (text_file[i] != '\0')
        {
            switch (state)
            {
            case 0:
                if (text_file[i] == '/')
                    {
                     state = 1;
                    }
                new_text_file[j] = text_file[i]; 
                i ++;
                j ++;
                break;
            case 1:
                if (text_file[i] == '/')
                { 
                    state = 2;
                    new_text_file[j] = '*';
                }else
                { 
                    state = 0;
                    new_text_file[j] = text_file[i];
                }
                i ++;
                j ++;
                break; 
            case 2:
                if (text_file[i] == '\n')
                {
                    new_text_file[j] = '*';
                    new_text_file[j + 1] = '/';
                    j += 2;
                    state = 0;
                }
                new_text_file[j] = text_file[i];
                i ++;
                j ++;
            }
        }
        printf("new file creating...\n");
        FILE *f_new = fopen("C:/LabPrograming/Curs1/C++_new.txt", "w");
        fputs(new_text_file, f_new);
        fclose(f_new);
    }else
    {
        printf("%s", filename);
        printf("can't open file");
    }
}