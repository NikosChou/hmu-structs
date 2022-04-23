#include <stdio.h>
#include <string.h>

struct one
{
    int ak;
    char pin[30];
};

struct two
{
    int data;
    int mat[20];
    struct one item;
    struct one melos;
};

void readOne(struct one *one)
{
    printf("one.ak: ");
    scanf("%d", &one->ak);
    printf("one.pin: ");
    scanf("%s", one->pin);
}
void readTwo(struct two *two)
{
    printf("two.data: ");
    scanf("%d", &two->data);
    printf("two.mat: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &two->mat[i]);
    }
    readOne(&two->item);
    readOne(&two->melos);
}

void printOne(struct one one)
{
    printf("\tone.ak: %d\n", one.ak);
    printf("\tone.pin: %s\n", one.pin);
}

void printTwo(struct two two)
{
    printf("------------------------\n");
    printf("two.data: %d\n", two.data);
    printf("two.mat: ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", two.mat[i]);
    }
    printf("\n");
    printf("two.item:\n");
    printOne(two.item);

    printf("two.melos:\n");
    printOne(two.melos);
    printf("------------------------\n");
}

int main(int argc, char const *argv[])
{
    struct two person, memb;

    // readTwo(&person);

    person.data = 10;
    int foo[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 20; i++)
    {
        person.mat[i] = i;
    }

    person.item.ak = 1;
    strcpy(person.item.pin, "nikos");
    person.melos.ak = 2;
    strcpy(person.melos.pin, "mano");
    printTwo(person);

    strcpy(memb.item.pin, person.item.pin);
    printTwo(memb);
    printf("memb.melos.pin lenth: %lu\n", strlen(memb.melos.pin));
    strcat(memb.melos.pin, memb.item.pin);
    printTwo(memb);

    memb.melos = memb.item;
    printTwo(memb);
    printf("\n");

    return 0;
}
