#include<stdio.h>
void square(long long int n)
{
    printf("square = %lld",n*n);
}
int main() {
    long long int n;
printf("Enter a number: ");
scanf("%lld",&n);
square(n);
return 0;
}