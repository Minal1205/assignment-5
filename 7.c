#include <stdio.h>
// to print n even natural numbers in reverse order
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (num; num >= 0; num -= 2)
    {
        if (num & 1 == 1)
        {
            num = num - 1;
            printf("%d\n", num);
        }
        else
            printf("%d\n", num);
    }

    return 0;
}