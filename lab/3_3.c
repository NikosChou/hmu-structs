#include <stdio.h>
#define N 10
struct student
{
    int am;
    char name[30];
};
int main()
{
    struct student pin[N];
    int k;
    for (k = 0; k < N; k++)
    { 
        printf("Dwste AM tou spoudasth %d -> ", k + 1);
        scanf("%d", &pin[k].am);
        fflush(stdin);
        printf("Dwste onoma -> ");
        gets(pin[k].name);
    }
    for (k = 0; k < N; k++)
        printf("Spoudasths %3d\n", k + 1);
    printf("AM=%4d\n", pin[k].am);
    printf("Arxiko gramma onomatos=%3c\n",
           pin[k].name[0]);
    printf("Onoma=%s \n", pin[k].name);
    return 0;
}
