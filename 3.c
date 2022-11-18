#include <stdio.h>
// to print n natural numbers in reverse order
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (num; num > 0; num--)
    {
        printf("%d\n", num);
    }

    return 0;
}