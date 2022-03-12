#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int S=0;
 	int i;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (i=7 ; i<n ; i+=7){
	    S+=i;
	 }
	 printf ("gia tri S=%d",S);
}
