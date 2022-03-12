#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i;
 	unsigned long GT=1;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	if (n<0){
 		printf ("hay nhap n>0");
	 }else {
	 	for (i=1 ; i<=n ; i++){
	 		GT*=i;
		 }
		 printf ("%d!=",n);
	 }
	 printf ("%d",GT);
}
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
