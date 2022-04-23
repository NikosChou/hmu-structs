#include <stdio.h>

struct stype
{
    int j;
    char ch[30];
    float fp;
};

void readStype(struct stype *str)
{
    printf("give j:");
    scanf("%d", &str->j);

    printf("give ch:");
    scanf("%s", str->ch);

    printf("give fp:");
    scanf("%f", &str->fp);
}

void print(char *s, struct stype str)
{
    printf("Name: %s\n", s);
    printf("stype.j: %d\n", str.j);
    printf("stype.ch: %s\n", str.ch);
    printf("stype.fp: %f\n", str.fp);
}

int main(int argc, char const *argv[])
{
    struct stype str1, str2, temp;

    readStype(&str1);
    readStype(&str2);

    print("str1", str1);
    print("str2", str2);

    temp = str1;
    str1 = str2;
    str2 = temp;

    print("str1", str1);
    print("str2", str2);

    return 0;
}
