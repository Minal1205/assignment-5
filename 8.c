#include <stdio.h>
// to print square of n natural number
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int square = i * i;
        printf("Square of %d is %d\n", i, square);
    }
    return 0;
}