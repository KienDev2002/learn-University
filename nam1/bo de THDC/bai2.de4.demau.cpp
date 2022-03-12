#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , float A[100] , float B[100] , int m);
void tinh (int n , float A[100],float B[100], int m, float x);
void heso (int n , float A[100], float B[100],int m);
int main(){
   int n,m;
   float A[100],x;
   float B[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	printf ("nhap m =");
   	scanf ("%d",&m);
   	nhapin(n,A,B,m);
   	tinh (n,A,B,m,x);
   	heso (n,A,B,m);
   	return 0;
}
void nhapin (int n , float A[100],float B[100], int m){
	int i ;
	for (i=0 ; i<n ; i++){
		printf ("A[%d]=",i);
		scanf ("%f",&A[i]);
	}
	for (i=0 ; i<n ; i++){
		printf ("%0.2f\t",A[i]);
	}
		for (i=0 ; i<m ; i++){
		printf ("\nB[%d]=",i);
		scanf ("%f",&B[i]);
	}
	for (i=0 ; i<m ; i++){
		printf ("%0.2f\t",B[i]);
	}
}
void tinh (int n , float A[],float B[], int m, float x){
	int i;
	float P=0;
	float Q=0;
	float *p=A;
	float *ptr=B;
	printf ("\nnhap x=");
	scanf ("%f",&x);
	for (p=A ; p<A+n ; p++){
		P=P+((*p)*pow (x,i));
	}
	for (ptr=B ; ptr<B+m ; ptr++){
			Q=Q+((*ptr)*pow (x,i));
	}
	printf ("\nP+Q=%0.2f",P+Q);
}
void heso (int n , float A[100], float B[100],int m){
	printf("\n he so x.P(x)+Q(x) la: ");
	int i;
	int C[100];
	int D[100];
	C[0]=0;
	for (i=1;i<=n+1;i++){
		C[i]=A[i-1];
	}
	if (m<=n+1){
		for (i=0;i<=m;i++){
			D[i]=B[i]+C[i];
		}
		for (i=m+1;i<=n+1;i++){
			D[i]=C[i];
		}
	  for (i=0;i<=n+1;i++){
		printf("%d\t",D[i]);
	}
	}else{
		for (i=0;i<=n+1;i++){
			D[i]=B[i]+C[i];
		}
		for (i=n+2;i<=m;i++){
			D[i]=B[i];
		}
	  for (i=0;i<=m;i++){
		printf("%d\t",D[i]);
	}
	}
}






