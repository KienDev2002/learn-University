#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int S=0;
 	int GT=1;
 	int i;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (i=1 ; i<=n ; i++){
 	    GT*=i;
		 S+=GT; 
	 }
	 printf ("gia tri S = %d",S);
}
