#include<stdio.h>
int main()
{
int t,num ,rem,res=0;
printf(" enter the number :");
scanf("%d ",&t);
num=t;
while(num!=0)
{
rem=num%10;
res+=rem*rem*rem;
num/=10;
}
if(res==t)
printf("%d is yes.",t);
else
printf(" %d is no.",t);
return 0;
}
