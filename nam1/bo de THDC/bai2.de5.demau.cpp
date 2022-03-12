#include<stdio.h>
#include<math.h>
#include<conio.h>
void matran (int n , float A[100][100] , int m );
void tong (int n , float A[100][100], int m);
void GTLN (int n , float A[100][100], int m);
int main (){
	int n,m;
	float A[100][100];
	printf ("nhap m hang =");
	scanf ("%d",&m);
   	printf ("nhap n cot =");
	scanf ("%d",&n);
	matran (n,A,m);
	tong (n, A ,m);
	GTLN (n,A,m);
}
void matran (int n , float A[100][100] , int m ){
	printf ("nhap ma tran :");
	int i,j;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("\n A[%d][%d]=",i,j);
			scanf ("%f",&A[i][j]);
		}
	}
		for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("%0.2f\t",A[i][j]);
			
		}
		printf ("\n");
	}
}
void tong (int n , float A[100][100], int m){
	int i,j;
	float tong =0;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (i%2==0 && j%2!=0){
				tong = tong +(A[i][j]);
			}
		}
	}
	printf ("tong = %0.2f",tong);
}
void GTLN (int n , float A[100][100], int m){
	int i,j;
	int dem =0;
	float max = A[1][1];
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (A[i][j]>=max){
				max=A[i][j];
			}
		}
	}
	printf ("\nGTLN=%0.2f",max);
	printf("\n vi tri cua GTLN la: ");
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (A[i][j]==max){
				dem++;
				printf ("A[%d][%d]",i,j);
			}
		}
	}
	printf ("\nco %d GTLN",dem);
}









