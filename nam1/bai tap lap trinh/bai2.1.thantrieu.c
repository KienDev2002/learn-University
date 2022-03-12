#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	if (n<0){
 		printf ("nhap n>0");
	 }else {
	 	printf ("cac so chan la:");
	 	for (i=0 ; i<n ; i+=2){
 			printf ("%5d",i);
		 }
		printf ("\n cac so le la:");
		 for (i=1 ; i<n ; i+=2){
		 	printf (" %5d",i);
		 }
	 }
	 }
 
