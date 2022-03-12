#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , int A[100]);
void tinh (int n , int A[100]);
void csc (int n , int A[100]);
int main(){
   int n;
   int A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	tinh (n,A);
   	csc (n,A);
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
	float S=2021;
	for (i=1 ; i<=n ; i++){
		S=S+((A[i]+2*i+1)/(2*i+7));
	}
	if (S<0){
		printf("khong co gia tri S");
	}else{
	printf ("\nS=%0.2f",sqrt(S));
	}
}
void csc (int n , int A[100]){
	int i,dem;
	for (i=2 ; i<=n ;i++){
		if (A[i-1]+A[i+1]==2*A[i]){
			dem=dem+1;
			printf ("\nday csc la: %10d %10d %10d",A[i-1],A[i],A[i+1]);
		}
	}
	if(dem==0){
		printf("khong co cap nao");
	}
}






