#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i=2;
 	int dem =0;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	if (n<1){
 		printf ("xin vui long nhap lai n");
	 }else if (n==1){
	 	printf ("1=2^0");
	 }else {
	 	while (n>1){
	 		if (n%i==0){
	 			dem++;
	 			if (n==i){
	 				printf ("%d^%d",i,dem);
				 }
				 n/=i;
			 }else {
			 	if (dem>0){
			 		printf ("%d^%d",i,dem);
			 		dem=0;
				 }
				 i++;
			 }
		 }
	 }
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
