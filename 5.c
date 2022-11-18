#include <stdio.h>
// to print n odd numbers in reverse order
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    if (num & 1 == 1)
    {

        for (num; num > 0; num -= 2)
        {
            printf("%d\n", num);
        }
    }
    else
    {
        num = num - 1;
        for (num; num > 0; num -= 2)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}