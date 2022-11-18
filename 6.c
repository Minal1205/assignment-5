#include <stdio.h>
// to print first n even natural numbers
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    for (int i = 2; i <= num; i += 2)
    {
        printf("%d\n", i);
    }
    return 0;
}