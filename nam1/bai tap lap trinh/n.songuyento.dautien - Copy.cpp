#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i;
 	int dem =0;
 	int m=2;
 	int mark =1;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	if (n<0){
 		printf ("khong co so nguyen to");
	 }else {
	 	while (1){
	 		for (i=2 ; i<=sqrt(m) ; i++){
	 			if (m%i==0){
	 				mark =0;
	 				break;
				 }
				 }
				 if (mark ==1){
				 	dem++;
				 	printf ("%d ,",m);
				 }
				  if (dem >=n){
			 	break;
			 }
			 m++;
			 }
		 }
	 }
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
 	
