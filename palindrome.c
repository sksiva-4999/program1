#include<stdio.h>
int main()
{
  int n,rev=0,remainder,t;
  printf("enter an integer:");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
    remainder=n%10;
    rev=rev+t*10+remainder;
    n /=10;
  }
  if(t==rev)
  printf("%d yes.",t);
  else
  printf("%d" no.",t);
  return 0;
  }
