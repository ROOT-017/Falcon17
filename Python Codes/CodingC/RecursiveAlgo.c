#include <stdio.h>
int reverse(int num)
{
    if (num < 0)
    {
        return 0;
    }
    else
    {
        printf("%d\n", num);
        reverse(num - 1);
    }
    return 0;
}
int main()
{
    int num;
    printf("enter a value:");
    scanf("%d", &num);
    reverse(num);
    return 0;
}