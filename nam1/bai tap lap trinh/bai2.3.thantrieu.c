#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	float S=0;
 	int i;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (i=1 ; i<n ; i++){
 		S+=(float)1/i;
	 }
	 printf ("gia tri S = %0.8f",S);
}
	 
	 
