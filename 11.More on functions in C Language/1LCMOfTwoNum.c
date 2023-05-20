#include<stdio.h>
int lcm(int a, int b)
{
   int max=a>b?a:b;
   if(max%a==0 && max%b==0)
   {
    return max;
   }
   for(int i=max;i<=a*b;i+=max)
    if(i%a==0 && i%b==0)
      return i;
}
int main() {
int a,b;
printf("Enter two numbers to find the LCM");
scanf("%d%d",&a,&b);
printf("LCM is %d",lcm(a,b));
return 0;
}