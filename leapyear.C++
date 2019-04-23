#inclde<iostream>
using namespace std;
int main()
{
int year=2013;
if(((year%4==0)&&(year%100 !=0)||(year%400==0))
cout<<year<<"yes";
else
cout<<year<<"no";
return 0;
}
