#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void print(int pin[])
{
    for (int i = 0; i < N; i++)
        printf("%3d", pin[i]);
    printf("\n");
}

void sort(int pin[])
{
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 1; j < N; j++)
            if (pin[i] < pin[j])
                continue;
            else
            {
                pin[i] = pin[i] + pin[j];
                pin[j] = pin[i] - pin[j];
                pin[i] = pin[i] - pin[j];
            }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int pin[N];
    for (int i = 0; i < N; i++)
        pin[i] = rand() % 100;

    print(pin);
    sort(pin);
    print(pin);

    return 0;
}
