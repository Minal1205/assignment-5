#include <stdio.h>
//to print first n natural numbers
int main()
{
    int num;
    printf("Enter how many natural numbers you want to print\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}