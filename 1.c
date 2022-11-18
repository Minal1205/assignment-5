#include <stdio.h>
// to print MySirG n times
int main()
{
    int n;
    printf("How many times you want to print INeuron=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("INeuron\n");
    }
    return 0;
}