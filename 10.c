#include <stdio.h>
// to print multiplication table of given number
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        int mul = num * i;
        printf("%dx%d=%d\n", num, i, mul);
    }
    return 0;
}