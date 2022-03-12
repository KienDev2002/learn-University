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
	printf("\n");
	for (i=n ; i>=1 ; i--){
		printf ("%d\t",A[i]);
	}
}
void ptulientiep (int n , int  A[100]){
	printf ("\n in ra cap la :");
	int i;
	int luui;
	int dem=0;
	for (i=2 ; i<=n ; i++){
			if ((A[i]*A[i-1])%(A[i]+A[i-1])==0){
				dem++;
				luui=i;
			}
		}
		if (dem==0){
			printf("\nkhong co cap  thoa man:");
		}else{
				printf("\nco %d cap nao thoa man:",dem);
				printf("\nmot cap thoa man la: %d va %d",A[luui],A[luui-1]);

		}
}








