#include<stdioi.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter the base number:");
scanf("%d",&exponent);
printf("enter the exponent:")
scanf("%d",&exponent);
while(exponent !=0)
{
result*=base;
--exponent;
}
printf("ans=%lld",result);
return 0;
}
