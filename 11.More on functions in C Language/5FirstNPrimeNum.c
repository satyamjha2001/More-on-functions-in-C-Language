#include <stdio.h>
void prime(int n)
{
    int i, x = 2;
    while (n)
    {
        for (i = 2; i < x; i++)
            if (x % i == 0)
                break;
        if (i == x)
        {
            printf("%d ", x);
            n--;
        }
        x++;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Enter positive number.");
    else
    {
        prime(n);
    }
    return 0;
}