#include<stdio.h>
int main()
{
int array[100],maximum,size,c,location=1;
printf("enter the element \n");
scanf("%d",&size);
printf(" enter %d integer \n,size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
maximum=array[0];
for(c=1;c<size;c++)
{
if(array[c]>maximum)
{
maximum=array[c];
location=c+1;
}
}
printf(" maximum element location %d and its value is %d.\n",location,maximum);
return 0;
}
