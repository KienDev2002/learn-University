#include<stdio.h>
#include<math.h>
#include<string.h>
void inmatran (int m , int n , float A[100][100]);
int main (){
	int m,n,i,j;
	float A[100][100];
	printf ("nhap  so hang =");
	scanf("%d",&n);
	printf(" nhap so cot =");
	scanf("%d",&m);
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<=m ; j++){
			printf ("A[%d][%d]=",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	printf("\nma tran vua nhap la: \n");
	inmatran (n,m,A);
}
void inmatran (int m , int n , float A[100][100]){
	int i,j;
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<=m ; j++){
			printf ("%10.2f",A[i][j]);
		}
		printf ("\n");
	}
}






