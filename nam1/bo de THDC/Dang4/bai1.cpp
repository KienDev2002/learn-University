#include<math.h>
#include<stdio.h>
void in (int n , float A[100]);
void tinh (int n , float A[100],int x0);
void daoham (int n , float A[100],int x);
int main(){
	int n;
	float A[100];
	int x0,x;
	printf("nhap bac cua P: n=");
	scanf("%d",&n);
	printf("nhap he so cua P: ");
	for (int i=0; i<=n ; i++){
		printf("A[%d]=",i);
		scanf ("%f",&A[i]);
	}
	in(n,A);
	tinh (n,A,x0);
	daoham (n,A,x);
}
void in (int n , float A[100]){
	int i;
	for (i=0 ; i<=n ; i++){
		printf ("%0.2f\t",A[i]);
	}
}
void tinh (int n , float A[100], int x0){
	printf("\ngia tri cua da thuc tai x0 la: ");
	int i;
	float P=0;
	printf("\nnhap x0=");
	scanf ("%d",&x0);
	for (i=0 ; i<=n ; i++){
		P=P+(A[i]*pow(x0,i));
	}
	printf("P=%0.2f",P);
}
void daoham (int n , float A[100],int x){
	int i;
	float xmuj=1;//j=i-1;
	printf("\nnhap x=");
	scanf("%d",&x);
	float kq=A[1];
	for (i=2 ; i<=n ; i++){
		xmuj*=x;
		kq+=A[i]*i*xmuj;
	}
	printf("\ngia tri dao ham cap 1 cua da thu la: ");
	printf("%0.2f",kq);
	printf("\ncac he so cua da thuc sau dao ham la: ");
	for (i=1; i<=n ; i++){
		printf("%0.2f\t",A[i]*i);
	}
}






