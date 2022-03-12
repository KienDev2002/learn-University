#include<stdio.h>
#include<math.h>
long GT (int n);
long mau (int n);
double tu (float x, int n);
int main(){
	int n;
	float x;
	printf ("nhap n=");
	scanf ("%d",&n);
	printf ("nhap x=");
	scanf ("%f",&x);
	printf ("S=%0.2f",(double)(tu(x,n))/(double)(mau(n)));
}
long GT (int n){
	int i;
	long x=0;
	for (i=1 ; i<=n ; i++){
		x=x+(2*i+1);
	}
	return x;
}
long mau (int n){
	long mau=1;
	for (int i=1 ; i<=n ; i++){
		mau*=GT(i);
	}
	return mau;
}
double tu (float x, int n){
	int i;
	double s=0;
	for (i=1; i<=n ;i++){
		s=s+pow(x,i);
	}
	return s;
}





