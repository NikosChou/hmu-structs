#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define R 3
#define C 30

int main(int argc, char const *argv[])
{
    char *strs[R];

    for (int i = 0; i < R; i++)
        strs[i] = (char *)calloc(C, sizeof(char));

    for (int i = 0; i < R; i++)
    {
        printf("Give a string:");
        fgets(strs[i], C, stdin);
        if (strlen(strs[i]) == 0)
            break;

        strs[i][strlen(strs[i]) - 1] = '\0';
    }

    for (int i = 0; i < R; i++)
        puts(strs[i]);

    int charSum = 0;
    for (int i = 0; i < R; i++)
        charSum += strlen(strs[i]);
    printf("Sum of chars: %d\n", charSum);

    int maxStr = strlen(strs[0]);
    int maxI = 0;
    for (int i = 1; i < R; i++)
        if (maxStr < strlen(strs[i]))
        {
            maxStr = strlen(strs[i]);
            maxI = i;
        }

    printf("Max i: %d, max string: %s, len: %lu\n", maxI, strs[maxI], strlen(strs[maxI]));

    return 0;
}