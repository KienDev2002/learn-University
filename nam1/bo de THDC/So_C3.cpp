#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , float A[100]);
float GTLN (int n , float A[100]){
	int i;
	float max= abs(A[1]);
	for (i=1;i<=n;i++){
		if (max<abs(A[i])){
			max=abs(A[i]);
		}
	}
	return max;
}
 float gtln (int n , float A[100]){
 	int i;
 	float max1=A[1]/n;
 	for (i=1;i<n;i++){
 		if ( ((A[i+1])/(n-i)) >= max1){
 			max1=(A[i+1])/(n-i);
		 }
	 }
	 return max1;
 }
 float tinh (int n , float A[100]){
 	int i;
 	float S=0;
 	for (i=3;i<=n;i++){
 		S+=((A[i-2]+ A[i-1] + A[i])/(A[i-2]+A[i]));
	 }
	 return S;
 }
int main(){
   int n;
   float A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	printf("\nGTLN= %0.2f",GTLN(n,A));
   	printf("\nGTLN= %0.2f",gtln(n,A));
   	printf("\nS= %0.2f",tinh(n,A));
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


