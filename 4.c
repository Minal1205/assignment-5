#include <stdio.h>
// to print first n odd natural numbers
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}