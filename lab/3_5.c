#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ASCII_START 65
#define ASCII_END 126
#define N 100

struct funds
{
    char name[20];
    float poson;
};

struct funds *createFunds();
void printFunds(struct funds *);

int main()
{
    srand(time(NULL));

    struct funds *persons[N];

    for (int i = 0; i < N; i++)
    {
        persons[i] = createFunds();
    }

    for (int i = 0; i < N; i++)
    {
        printFunds(persons[i]);
    }

    return 0;
}

void printFunds(struct funds *s)
{
    printf("---------------------\n");
    printf("ch: %s\n", s->name);
    printf("f: %f\n", s->poson);
}

struct funds *createFunds()
{
    struct funds *temp;
    temp = (struct funds *)calloc(1, sizeof(struct funds));
    int i;
    for (i = 0; i < 20; i++)
    {
        temp->name[i] = (char)(rand() % (ASCII_END - ASCII_START)) + ASCII_START;
    }
    temp->name[i] = '\0';
    temp->poson = (float)(rand() % 20);

    return temp;
}
