#include <stdio.h>
int hcf(int a, int b)
{
    int h;
    if(a<=0 && b<=0)
    return 0;
    while (b != 0)
    {
        if (a % b == 0)
            return b;
        h = b;
        b = a % b;
        a = h;
    }
}
int main()
{
    int a, b;
    printf("Enter two numbers to find the HCF");
    scanf("%d%d", &a, &b);
    if(hcf(a,b))
    printf("HCF is %d", (hcf(a, b)));
    return 0;
}