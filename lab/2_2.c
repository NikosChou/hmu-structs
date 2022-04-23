#include <stdio.h>
#include <string.h>

#define R 4
#define C 20

void fillArray(char pin[][C]);
void printArray(char pin[][C]);
void sort(char pin[][C]);

int main(int argc, char const *argv[])
{

    char students[R][C];

    fillArray(students);
    printf("-------------------------\n");
    printArray(students);
    printf("-------------------------\n");
    sort(students);
    printArray(students);

    return 0;
}

void fillArray(char pin[][C])
{
    for (int i = 0; i < R; i++)
        gets(pin[i]);
}

void printArray(char pin[][C])
{
    for (int i = 0; i < R; i++)
    {
        puts(pin[i]);
    }
}

void sort(char pin[][C])
{
    for (int i = 0; i < R - 1; i++)
    {
        for (int j = i + 1; j < R; j++)
        {
            for (int c = 0; c < C; c++)
            {
                if (pin[i][c] < pin[j][c])
                {
                    break;
                }
                else
                {
                    char temp[C];
                    strcpy(temp, pin[j]);
                    strcpy(pin[j], pin[i]);
                    strcpy(pin[i], temp);
                    break;
                }
            }
        }
    }
}
