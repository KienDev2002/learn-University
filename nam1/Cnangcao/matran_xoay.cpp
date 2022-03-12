#include<conio.h>
#include<iostream>
using namespace std;
long xoay(int n,int x,int y)
{
long kq;
int a,b,k;
a=n+1-x;
b=n+1-y;
if(x<=a && x<=b && x<=y)
{
k=x-1;
kq=4*k*(n-k)+ y-k;
}
else if(b<=x && b<=a &&b<=y)
{
k=b-1;
kq=4*k*(n-k)+ n-2*k-1 + x-k;
}
else if(a<=x && a<=b && a<=y)
{
k=a-1;
kq=4*k*(n-k)+ 2*(n-2*k-1) + b-k;
}
else
{
k=y-1;
kq=4*k*(n-k)+ 3*(n-2*k-1) + a-k;
}
return kq;
}
int main()
{
int n=5,i=1,j=5;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
cout<<xoay(n,i,j)<<"\t";
cout<<"\n";
}
getch();
}
