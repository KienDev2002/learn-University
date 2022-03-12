#include<stdio.h>
#include<math.h>
double can2(double a){
	double kq;
	double  n =(a+1)/2;
	do{
		kq=n;
		n=0.5*(n+a/n);
	}while(fabs(n-kq)>0.0001);
	return n;
}
int main(){
	double x,n;
	do{
	printf("nhap gia tri can khai trien can: ");
	scanf("%lf",&x);
	if (x<0){
		printf("xin vui long nhap lai voi so duong \n");
	}	
	}while(x<0);
	printf("gia tri can bang 2 cua x la: %lf",can2(x));
}
