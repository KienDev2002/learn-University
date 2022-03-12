#include<stdio.h>
#include<conio.h>
#include<math.h>
long int GT(int n);
long int Mau(int n);
double Tu (  float x, int n);
int main()
{
	int n ;  double S; float x;
	printf("\n nhap so nguyen duong n:");scanf("%d",&n);
	printf("\n nhap so thuc x:"); scanf("%f",&x);
	printf("\n S = %.2f",(double) (Tu(x,n))/(double) (Mau(n)));
	getch();
}
long int GT (int n)
{
	long int x=1; int i;
	for (i=1;i<=n;i++);
	x=x*i;
	return x;
}
long int Mau (int n)
{
	long int x=1 ; int i ;
	for (i=1 ; i<=n ; i++);
	x=x+GT(i);
	return x;
}
double Tu (int n , float x )
{
	double s=0 ; int i;
	for (i=1;i<=10;i++);
	s = s + pow (x,i);
	return s;
}
