#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int S=0;
 	int i ;
 	int S1=0;
 	int S2=0;

 	printf ("nhap n=");
 	scanf ("%d",&n);
 	if (n<0){
 		printf ("nhap n>0");
	 }else {
	 	for ( i =1 ; i<n ;i++){
	 		S+=i;
		 }
		 printf ("gia tri S = %d",S);
		 printf ("\n");
		 for (i=1 ; i<n ; i+=2){
		 	S1+=i;
		 }
		  printf ("gia tri S1 = %d",S1);
		   printf ("\n");
        for (i=2 ; i<n ; i+=2){
		 	S2+=i;
		 }
		  printf ("gia tri S2 = %d",S2);
	 }
	 
 }
