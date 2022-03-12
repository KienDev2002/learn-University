#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , int A[100]);
void tinh (int n , int A[100]);
int main(){
   int n;
   int A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	tinh (n,A);
}
void nhapin (int n , int A[100]){
	int i ;
	for (i=1 ; i<=n ; i++){
		printf ("A[%d]=",i);
		scanf ("%d",&A[i]);
	}
	for (i=1 ; i<=n ; i++){
		printf ("%d\t",A[i]);
	}
}
void tinh (int n , int A[100]){
	int i;
	float mau=0;
	for (i=1 ; i<=n ; i++){
		mau+=A[i];
	}
	printf ("\nS=%0.2f",sqrt(1/mau));
}

