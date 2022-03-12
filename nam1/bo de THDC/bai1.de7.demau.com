#include<stdio.h>
#include<math.h>
void cau1(int n, float *a){
	for (int i=0;i<=n;i++){
		printf("%8.2f",a[i]);
	}
}
void cau2(int n, float *a){
	float t;
	float sum1=0,sum2=0;
	printf("\nNhap vao so t: ");scanf("%f",&t);
	for(int i=0;i<=n;i++){
		sum1+= a[i]*pow(t,i);
		sum2+= a[i]*pow(-t,i);
	}
	printf("P(t) + P(-t) = %.2f",sum1+sum2);
}
void cau3(int n, float *a){
	float z;
	float sum = 0;
	printf("\nNhap vao so z: ");scanf("%f",&z);
	for(int i=1;i<=n;i++){
		sum += a[i]*n*pow(z,i-1);
	}
	if(sum == 0){
		printf("\nThoa man yeu cau de bai");
	}
	else{
		printf("\nKhong thoa man yeu cau de bai");
	}
}
int main(){
	int n;
	printf("Nhap vao so n: ");scanf("%d",&n);
	float a[n];
	for(int i=0;i<=n;i++){
		printf("Nhap vao phan tu a[%d]: ",i+1);scanf("%f",&a[i]);
	}
	cau1(n,a);
	cau2(n,a);
	cau3(n,a);
}
