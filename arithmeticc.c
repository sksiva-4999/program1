#include<stdio.h>
#include<math.h>
int main()
{
int a,d,n,i,tn;
int sum=0;
printf("first term valueof :");
scanf("%d",&a);

printf("total number  :");
scanf("%d",&n);

printf("comman difference :");
scanf("%d",&d);
sum=(n*(2*a+(n-1*d))/2;
tn=a+(n-1)*d;
printf(" sum  of the a p serious :");
for(i=a;i<=tn;i=i+d)
{
if(i!=tn)
printf("%d+",i);
else
printf("%d=%d",i,sum);
}
return 0;
}
