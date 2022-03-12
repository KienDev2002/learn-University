#include<stdio.h>
#include<math.h>
//void inmatran (int n , float a[100][100],float b[100][100],int m );
void nhan2matran (int n , float a[100][100],float b[100][100],int m, float c[100][100]);
 int main (){
 	int m ,n,l;
 	int i,j,k;
 	float a[100][100];
 	float b[100][100];
 	float c[100][100];
 	printf ("nhap m hang =");
 	scanf ("%d",&m);
 	printf ("nhap n cot=");
 	scanf ("%d",&n);
 	for (i=1 ; i<=m ; i++){
 		for (j=1 ; j<=n ; j++){
 		printf ("\nma tran a[%d][%d]=",i,j);
 		scanf ("%f",&a[i][j]);
		 }
	 }
	 	 	for (i=1 ; i<=m ; i++){
 		for (j=1 ; j<=n ; j++){
 		printf ("\nma tran b[%d][%d]=",i,j);
 		scanf ("%f",&b[i][j]);
		 }
	 }
//	 inmatran (n,a,b,m);
	 nhan2matran(n,a,b,m,c);
 }
// void inmatran (int n , float a[100][100],float b[100][100],int m ){
// 	printf ("\n ma tran A=\n");
// 	for (int i=1 ; i<=m ; i++){
// 		for (int j=1 ; j<=n; j++ ){
// 			printf ("%0.2f\t",a[i][j]);
//		 }
//		 printf ("\n");
//	 }
//	 	printf ("\n ma tran B=\n");
// 	for (int i=1 ; i<=m ; i++){
// 		for (int j=1 ; j<=n; j++ ){
// 			printf ("%0.2f\t",b[i][j]);
//		 }
//		 printf ("\n");
//	 }
// }
void nhan2matran (int n , float a[100][100],float b[100][100],int m, float c[100][100]){
	printf ("\n A nhan B =\n");
	for (int i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++ ){
			c[i][j]=0;
			for (int l=1 ; l<=n ; l++){
			c[i][j]+= (a[i][l]*b[l][j]);
			}
		}
		printf ("\n");
	}
	 	for (int i=1 ; i<=m ; i++){
 			for (int j=1 ; j<=n; j++ ){
				printf ("%0.2f\t",c[i][j]);
			 }
		 printf ("\n");
	}
}



 
 
 
 
 
 
 
 
 
