#include <stdio.h>
#include <stdlib.h>

struct array
{
    int *pin;
    int len;
};

void reverse(int len, int pin[len])
{
    for (int i = 0; i < len / 2; i++)
    {
        int temp = pin[i];
        pin[i] = pin[len - 1 - i];
        pin[len - 1 - i] = temp;
    }
}

struct array *convertBinary(int toConvert)
{
    int n = 0, piliko;
    struct array *result;
    result = malloc(sizeof(struct array));
    result->len = 0;
    do
    {
        result->len++;
        result->pin = (int *)realloc(result->pin, (result->len) * sizeof(int));
        *(result->pin + result->len - 1) = toConvert % 2;
        toConvert /= 2;
    } while (toConvert > 0);
    reverse(result->len, result->pin);
    return result;
}

void printArray(struct array *foo)
{
    int l = foo->len;
    int *pin = foo->pin;
    for (int i = 0; i < l; i++)
    {
        printf("%d", *(pin + i));
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int n;

    printf("Give an int number: ");
    scanf("%d", &n);

    printArray(convertBinary(n));
    return 0;
}
