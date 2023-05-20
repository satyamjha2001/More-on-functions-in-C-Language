#include <stdio.h>
int fact(int n)
{
    int i;
    for (i = 1; n > 1; n--)
        i *= n;

    return i;
}

int ncr(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
  void printPascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        {
            if(j>=line+1-i && j<=line-1+i && k)
            {
                printf("%2d",ncr(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    printPascal(n);
    return 0;
}