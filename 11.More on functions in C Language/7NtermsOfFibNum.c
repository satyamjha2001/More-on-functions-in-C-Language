#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c=0;
    while(n>0)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
        n--;
    }
}
int main() {
int n;
printf("Enter your number");
scanf("%d",&n);
fib(n);
return 0;
}