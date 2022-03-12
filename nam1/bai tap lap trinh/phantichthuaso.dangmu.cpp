#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i=2;
 	int dem =0;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	if (n<1){
 		printf ("nhap lai n>=2");
	 }else if (n==1){
	 	printf ("1=2^0");
	 }else {
	 	printf ("%d =",n);
	 	while (n>1){
	 		if (n%i==0){
	 			dem++;
	 			if (n==i){
	 				printf ("%d^%d",i,dem);
				 }
				  n/=i;
			 }else {
			 	if (dem>0){
			 		printf ("%d^%d x ",i,dem);
			 		dem=0;
				 }
			 	i++;
			 }
		 }
	 }
}
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
