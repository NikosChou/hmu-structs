#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stype
{
    int j;
    char ch[30];
    float fp;
};

void struct_swap(struct stype *, struct stype *);
void printStype(char *, struct stype);

int main()
{
    struct stype str1, str2;
    str1.j = 1;
    str1.fp = 1;
    stpcpy(str1.ch, "prwti");

    str2.j = 2;
    str2.fp = 2;
    stpcpy(str2.ch, "deuteri");

    printStype("str1", str1);
    printStype("str2", str2);
    struct_swap(&str1, &str2);
    printStype("str1", str1);
    printStype("str2", str2);

    return 0;
}

void printStype(char *name, struct stype s)
{
    printf("--------------\n");
    printf("%s:\n", name);
    printf("\tj: %d\n", s.j);
    printf("\tch: %s\n", s.ch);
    printf("\tf: %f\n", s.fp);
}
void struct_swap(struct stype *s1, struct stype *s2)
{
    char *temp;
    temp = (char *)calloc(30, sizeof(char));
    strcpy(temp, s1->ch);
    strcpy(s1->ch, s2->ch);
    strcpy(s2->ch, temp);
}