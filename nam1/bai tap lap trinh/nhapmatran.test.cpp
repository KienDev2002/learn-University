#include<stdio.h>
#include<math.h>

 int main (){
 	int m ,n;
 	int a[100][100];
 	int i , j ;
 	printf ("nhap m hang =");
 	scanf ("%d",&m);
 	printf ("nhap n cot =");
 	scanf ("%d",&n);
 	for (i=1; i<=n ; i++){
 		for (j=1 ; j<=n ; j++){
 			printf ("nhap ma tran [%d][%d]=",i,j);
 			scanf ("%d",&a[i][j]);
		 }
	 }
	 printf ("\n");
	 for (i=1 ; i<=n ; i++){
	 	for (j=1 ; j<=n ; j++){
	 		printf ("%d ",a[i][j]);
		 }
		 printf ("\n");
	 }
	 
 }
