#include <stdio.h>
// to print cubes of n natural number
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int cube = i * i * i;
        printf("Square of %d is %d\n", i, cube);
    }
    return 0;
}