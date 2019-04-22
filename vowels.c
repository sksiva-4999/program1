#include<stdio.h>
int main()
{
char ch;
printf("enter the charecter \n");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("%c vowel\n",ch);
else
printf("%c not vowel\n",ch);
return 0;
}
