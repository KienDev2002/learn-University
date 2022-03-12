#include<stdio.h>
#include<math.h>
#include<conio.h>
void nhapin (int n , int A[100]);
void ptulientiep (int n , int A[100]);
int main(){
   int n;
   int A[100];
   
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	ptulientiep (n,A);
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
void ptulientiep (int n , int  A[100]){
	printf ("\n in ra cap la :");
	int i;
	for (i=2 ; i<=n ; i++){
			if ((A[i]*A[i-1])%(A[i]+A[i-1])==0){
				printf ("\t%d    %d",A[i],A[i-1]);
			}
		}
}







