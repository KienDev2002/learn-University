#include<math.h>
#include<stdio.h>

float tinh (int n , float x , float A){
	int i;
	float S=A;
	for (i=1;i<=n;i++){
		S-=(float)(pow (x,i)/n);
	}
	return S;
}
int main(){
	float x, A;
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
   	printf("nhap x: ");
	scanf("%f",&x);
	printf("nhap A: ");
	scanf("%f",&A);
	printf("\n S= %0.2f",tinh (n,x,A));
}
