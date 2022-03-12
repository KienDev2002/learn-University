#include<stdio.h>
#include<math.h>
#include<conio.h>
void inmatran (int n , int A[100][100],int m);
void tinhtong (int n , int A[100][100], int m);
void GTLNvaVT (int n , int A[100][100],int m);
int main (){
	int i,j;
	int m ,n;
	int A[100][100];
	printf ("nhap m hang =");
	scanf ("%d",&m);
	printf ("nhap n cot =");
	scanf ("%d",&n);

	// phan 1
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("A[%d][%d]=",i,j);
			scanf ("%d",&A[i][j]);
		}
	}
inmatran (n,A,m);
tinhtong (n,A,m);
GTLNvaVT (n,A,m);
}
// phan 2
void inmatran (int n , int A[100][100],int m){
	printf ("----------ma tran A----------\n");
	int i ,j  ;
	for (i=1 ; i<=m ; i++){
		for (j=1; j<=n ; j++){
			printf ("%d\t",A[i][j]);
		}
		printf ("\n");
	}
}
// phan 3
void tinhtong (int n , int A[100][100], int m){
	printf ("\n");
	int i,j;
	int S=0;
	for (i=1 ; i<=m ;i++){
		for (j=1 ; j<=n ; j++){
			if (j%2==0){
				S=S+A[i][j];
			}
		}
	}
	printf ("S=%d",S);
}
void GTLNvaVT (int n , int A[100][100],int m){
	int i ,j;
	int max= A[1][1];
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
		if (A[i][j]>max){
			max = A[i][j];
		}
	}
}
	printf ("\nmax=%d",max);
	
	printf ("\nGTLN nam tai");
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
		    if (A[i][j]==max){
		    	printf ("A[%d][%d]",i,j);
			}
		}
	}
}

















