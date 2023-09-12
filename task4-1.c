//Программа написана не мной. Её автор будущий гений. 
#include  <stdio.h>
int MAX(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else 
    {
        return a;
    }
}

int main ()
{
    int kolvo, new_number, previouse_number = -4096, count = 1, maxcount = 1, answer = 0;
    printf("Vvedite kolvo chisel: ");
    scanf("%i", &kolvo);
    printf("\nVvedite posledovatelnost chisel: ");
    for (int i = 0; i < kolvo; i++)
    {
        scanf("%i", &new_number);
        if (new_number >= previouse_number && i != 0)
        {
            count++;
        }
        else
        {
            maxcount = MAX(count, maxcount);
            if (count > 1)
            {
                answer++;
            }
            count = 1;

        }
        previouse_number = new_number;
    }
    if (count == kolvo)
    {
        printf("\nKolvo promejutkov: %i, Max dlina: %i", 1, kolvo);
        return 0;
    }
    printf("\nKolvo promejutkov: %i, Max dlina: %i", answer, maxcount);
    return 0;
}