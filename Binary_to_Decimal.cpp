#include"iostream"
#include"cmath"
#include"string.h"
using namespace std;
int main()
{
char a[20];
int i=0,p,e,r,j=0,ds=0;
cout<<"Enter Binary Number -> ";
fgets(a,20,stdin);//USE SCANF,GETS ALSO 
while(a[i]!='\0')
{
i++;
}
p=i-1;
e=p-1;
while(j!=p)
{
 if(a[j]=='1')
  {
  r=pow(2,e);
  ds+=r;
  }


j++;
e--;

}
cout<<ds<<"\n";
return 0;
}
