#include<stdio.h>
#include<math.h>
int main()
{
int low,high,i,temp1,temp2,rem,n=0,res=0;
printf("enter the two number:");
scanf("%d %d",&low,&high);
printf('armstrong number between%d are%d:",low,high);
for(i=low+1;i<high;++i)
{
temp2=i;
temp1=i;
while(temp1 !=0)
{
temp1 /=10)
{
temp1/=10;
++n;
}
while(temp2 !=0)
{
rem=temp2%10;
res+=pow(rem,n);
temp2/=10;
}
if(res==i)
{
printf("%d ",i);
}
n=0;
res=0;
}
return 0;
