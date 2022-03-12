#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , float A[100]);
void tinh (int n , float A[100]);
int main(){
   int n;
   float A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	tinh (n,A);
}
void nhapin (int n , float A[100]){
	int i ;
	for (i=1 ; i<=n ; i++){
		printf ("A[%d]=",i);
		scanf ("%f",&A[i]);
	}
	for (i=1 ; i<=n ; i++){
		printf ("%0.2f\t",A[i]);
	}
}
void tinh (int n , float A[100]){
	float S=2021;
	for (int i=1 ; i<=n ; i++){
		S=S+(pow (A[i],i)/i);
	}
	printf ("\nS=%0.2f",sqrt(S));
}


