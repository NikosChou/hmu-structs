#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define ASCII_START 65
#define ASCII_END 126
#define N 5

struct funds
{
    char name[20];
    float poson;
};

struct funds createFunds();
void printFunds(struct funds *);
float athroisma(struct funds[], char);

int main()
{
    srand(time(NULL));

    struct funds *persons;
    persons = (struct funds *)calloc(N, sizeof(struct funds));

    for (int i = 0; i < N; i++)
    {
        persons[i] = createFunds();
    }

    for (int i = 0; i < N; i++)
    {
        printFunds(&persons[i]);
    }
    char ch;
    printf("Give a char: ");
    scanf("%c", &ch);
    fflush(stdin);

    float sum = athroisma(persons, ch);

    printf("\nSum is: %f \n", sum);

    return 0;
}

void printFunds(struct funds *s)
{
    printf("---------------------\n");
    printf("ch: %s\n", s->name);
    printf("f: %f\n", s->poson);
}

struct funds createFunds()
{
    struct funds *temp;
    temp = (struct funds *)calloc(1, sizeof(struct funds));
    int i;
    printf("name: ");
    scanf("%s", temp->name);
    fflush(stdin);
    temp->poson = (float)(rand() % 20);

    return *temp;
}

float athroisma(struct funds mat[], char ch)
{
    float sum = 0.0;
    for (int i = 0; i < N; i++)
    {
        if (mat[i].name[0] == ch)
        {
            sum += mat[i].poson;
        }
    }
    return sum;
}
