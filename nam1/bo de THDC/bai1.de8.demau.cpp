#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapxuat (int n , int A[100]);
void tinh (int n , int A[100], float x);
void GTLN (int n , int A[100]);
int main(){
	int n;
	int A[100];
	float x;
	printf ("nhap n=");
	scanf ("%d",&n);
	nhapxuat (n,A);
	tinh (n,A,x);
	GTLN (n,A);
}
void nhapxuat (int n , int A[100]){
	int i;
	for (i=0 ; i<=n-1 ; i++){
		printf ("A[%d]=",i);
		scanf ("%d",&A[i]);
	}
	for (i=0 ; i<=n-1 ; i++){
		printf ("%d\t",A[i]);
	}
}
void tinh (int n , int A[100], float x){
	int i;
	float S=sin(x);
	printf ("\nnhap x=");
	scanf ("%f",&x);
	for (i=0 ; i<=n-1 ; i++){
		S=S+pow(A[i],2)/(x+i);
	}
	printf ("S=%0.2f",sqrt(S));
}
void GTLN (int n , int A[100]){
	printf ("\n GTLN la: ");
	int i,dem=0;
	int max;
	for (i=0; i<=n-1 ; i++){
		if (A[i]%3==2){
			  max=A[i];
			  dem++;
			  break;
			}
	}
	for (i=0 ;i<=n-1; i++){
		if ((A[i]%3==2)&&(A[i]>=max)){
			max=A[i];
		}
	}
	if (dem==0){
		printf("\nkhong co gia tri thoa man");
	}else{
	printf ("%d",max);
		}
	}





