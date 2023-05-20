#include <stdio.h>
void prime(int a, int b)
{
    int i;
    while (a<=b)
    {
        for (i = 2; i < a; i++)
            if (a % i == 0)
                break;
        if (i == a)
        {
            printf("%d ", a);
            
        }
        a++;
    }
}
int main()
{
    int a,b;
    printf("Enter  two numbers in which you need to find prime numbers: ");
    scanf("%d%d", &a, &b);
    if (a < 0 || b<0)
        printf("Enter positive number.");
    else
    {
        prime(a,b);
    }
    return 0;
}