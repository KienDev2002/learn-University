#include<stdio.h>
#include<math.h>

 int main (){
 	int  a, b, c; 
 	int max =a;
 	int S;
 	printf ("\n nhap  a =");
 	scanf ("%d", &a);
 	printf ("\n nhap  b =");
 	scanf ("%d", &b);
 	printf ("\n nhap  c =");
 	scanf ("%d", &c);
 	if (max<b){
 		max= b;
	 }
	 if (max <c){
	 	max=c;
	 }
	 int min =a;
	 if (min >b){
	 	min =b;
	 }
	 if (min>c){
	 	min =c;
	 }	
	 printf ("con so o giua la = %d",a+b+c-max-min);
}
	 	
	 
