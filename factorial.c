#include<stdio.h>
int main()
{
int i,n,fact=1;
printf("enter the factorial\n");
scanf("%d",&n)
for(i=1;i<=n;i++)
fact=fact*i;
printf(" factorial of %d=%d\n",n,fact);
return 0;
}
