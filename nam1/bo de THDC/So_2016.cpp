#include<stdio.h>
#include<math.h>
#include<conio.h>
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
int main(){
   int n;
   float A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
}

