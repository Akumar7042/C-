#include"iostream"
#include"string.h"
#include"cmath"
using namespace std;
int main()
{
char a[20],b[20];
int i=0,p,e,r,j=0,ds=0;
int k=0,l,s,q,w=0,d=0;
int z,x=0,sum=0,v,m[20];
cout<<"Enter First  Binary Number  -> ";
fgets(a,20,stdin);
cout<<"Enter Second Binary Number -> ";
fgets(b,20,stdin);
while(a[i]!='\0')
{
i++;
}
p=i-1;
e=p-1;
while(b[k]!='\0')
{
k++;
}
l=k-1;
s=l-1;
//for a
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
//for b
while(w!=l)
{
 if(b[w]=='1')
  {
  q=pow(2,s);
  d+=q;
  }
w++;
s--;

}
sum=ds+d;
cout<<"------Adding Binary Number----\n ";
cout<<"SUM IS -> ";
//SUM
while (sum!=1)
 {
 v=sum%2;
 sum=sum/2;
 m[x]=v;
 x++;
 }
cout<<" "<<sum;
z=x-1;
while(z>=0)
{

cout<<" "<<m[z];
z--;
}
cout<<endl;
}
