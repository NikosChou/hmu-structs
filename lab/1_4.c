#include <stdio.h>
#include <stdlib.h>

#define K 10

void read(int[]);
void print(int[]);
int meg(int[]);

int main()
{
    int *list;
    list = (int *)calloc(K, sizeof(int));

    printf("Balte times ston pinaka:\n");
    read(list);
    print(list);
    printf("Meg: %d\n", meg(list));
    return 0;
}

int meg(int a[])
{
    int temp = a[0];
    for (int i = 1; i < K; i++)
    {
        temp = a[i] > temp ? a[i] : temp;
    }
    return temp;
}

void read(int a[])
{
    int *temp, i;
    temp = (int *)malloc(sizeof(int));
    for (i = 0; i < K; i++)
    {
        scanf("%d", temp);

        if (*temp == 0)
        {
            break;
        }
        a[i] = *temp;
    }
    free(temp);
}

void print(int a[])
{
    int i;
    for (i = 0; i < K; i++)
        printf("%6d", a[i]);
    printf("\n");
}
