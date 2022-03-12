#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	int S=0;
 	int i;
 	for ( i=1 ; i<=n ; i++){
 		S=S+i;
	 }
	 printf ("\n gia tri S = %d",S);
 }
