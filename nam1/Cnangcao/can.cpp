#include<stdio.h>
#include<math.h>
#include<string.h>
double can (int a){
	float kq;
	float n=(a+1)/2;
	do{
		kq=n;
		n=0.5*(n+a/n);
	}while(fabs(kq-n)>0.000001);
	return n;
}
int main(){
	int a;
	printf("a: ");
	scanf("%d",&a);
	printf("can bac 2 cua %d la: %lf",a,can(a));
}

