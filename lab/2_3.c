#include <stdio.h>
#include <stdbool.h>

#define N 3

bool isSymetrical(int pin[N][N]);
bool isUpTrigonal(int pin[N][N]);
bool isDownTrigonal(int pin[N][N]);
bool isSparse(int pin[N][N]);

int main(int argc, char const *argv[])
{

    int pinax[N][N] = {
        {1, 2, 3},
        {2, 2, 3},
        {3, 3, 3}};

    printf("-------------------------\n");
    printf("is symetrical(true): %s\n", isSymetrical(pinax) ? "true" : "false");
    printf("is isUpTrigonal(false): %s\n", isUpTrigonal(pinax) ? "true" : "false");
    printf("is isDownTrigonal(false): %s\n", isDownTrigonal(pinax) ? "true" : "false");
    printf("is isSparse(false): %s\n", isSparse(pinax) ? "true" : "false");
    printf("-------------------------\n");

    int pinax2[N][N] = {
        {0, 2, 3},
        {0, 0, 3},
        {0, 0, 0}};

    printf("is symetrical(false): %s\n", isSymetrical(pinax2) ? "true" : "false");
    printf("is isUpTrigonal(false): %s\n", isUpTrigonal(pinax2) ? "true" : "false");
    printf("is isDownTrigonal(true): %s\n", isDownTrigonal(pinax2) ? "true" : "false");
    printf("is isSparse(false): %s\n", isSparse(pinax2) ? "true" : "false");
    printf("-------------------------\n");

    int pinax3[N][N] = {
        {0, 0, 0},
        {2, 0, 0},
        {3, 2, 0}};

    printf("is symetrical(false): %s\n", isSymetrical(pinax3) ? "true" : "false");
    printf("is isUpTrigonal(true): %s\n", isUpTrigonal(pinax3) ? "true" : "false");
    printf("is isDownTrigonal(false): %s\n", isDownTrigonal(pinax3) ? "true" : "false");
    printf("is isSparse(false): %s\n", isSparse(pinax3) ? "true" : "false");
    printf("-------------------------\n");

    int pinax4[N][N] = {
        {0, 0, 0},
        {0, 0, 0},
        {3, 0, 0}};

    printf("is symetrical(false): %s\n", isSymetrical(pinax4) ? "true" : "false");
    printf("is isUpTrigonal(true): %s\n", isUpTrigonal(pinax4) ? "true" : "false");
    printf("is isDownTrigonal(false): %s\n", isDownTrigonal(pinax4) ? "true" : "false");
    printf("is isSparse(true): %s\n", isSparse(pinax4) ? "true" : "false");
    printf("-------------------------\n");

    return 0;
}

bool isSymetrical(int pin[N][N])
{
    bool res = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (pin[i][j] != pin[j][i])
            {
                res = false;
            }
        }
    }
    return res;
}

bool isUpTrigonal(int pin[N][N])
{
    bool res = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j > i && pin[i][j] != 0)
            {
                res = false;
            }
        }
    }
    return res;
}

bool isDownTrigonal(int pin[N][N])
{
    bool res = true;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j < i && pin[i][j] != 0)
            {
                res = false;
            }
        }
    }
    return res;
}

bool isSparse(int pin[N][N])
{
    int count = 0;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (pin[i][j] == 0)
                count++;

    return ((float)count / (N * N)) >= .8;
}