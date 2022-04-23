#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STUDENTS 25
#define TESTS 5

void fillArray(int pin[][TESTS]);
void printArray(int pin[][TESTS]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int grades[STUDENTS][TESTS];

    fillArray(grades);
    printArray(grades);

    return 0;
}

void fillArray(int pin[][TESTS])
{
    for (int i = 0; i < STUDENTS; i++)
        for (int j = 0; j < TESTS; j++)
            pin[i][j] = rand() % 21;
}

void printArray(int pin[][TESTS])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        for (int j = 0; j < TESTS; j++)
            printf("%2d ", pin[i][j]);
        printf("\n");
    }
}
