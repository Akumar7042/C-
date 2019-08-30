#include <iostream>
using namespace std;
int main()
{
int p,t=0,n,r,a[10];
cout<<"Enter Number To Convet in Binary code : ";
cin>>n;
cout<<"Your Number In Binary Form Is :";

 while (n!=1)
 {
 r=n%2;
 n=n/2;
 a[t]=r;
 t++;
 }
cout<<" "<<n;
p=t-1;
while(p>=0)
{

cout<<" "<<a[p];
p--;
}
cout<<endl;
return 0;

}
