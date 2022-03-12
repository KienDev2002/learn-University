#include<stdio.h>	
#include<math.h>
#include<conio.h>
float chuvi (float a , float b , float c , float cv , float p);
float dtich (float a , float b , float c , float dt , float p);
 int main (){
 	float p ;
 	float a , b , c , dt , cv;
 	printf ("nhap 3 canh cua tam gia a,b,c=");
 	scanf ("%f%f%f",&a,&b,&c);
   	printf ("cv=%.2f ",chuvi (a , b ,c ,cv ,p ));
   	printf (" dt=%2f",dtich (a , b ,c ,dt ,p ));
 }
 float chuvi (float a , float b , float c , float cv  ,float p ){
 	if ((abs)(a-b)<c && c<a+b){
 		p = (a+b+c)/2;
 	    cv=p*2;
	 }else {
	 	printf ("ko phai tam giac");
	 }
	 return (cv);
 }
 float dtich (float a , float b , float c , float dt ,float p ){
 	if ((abs)(a-b)<c && c<a+b){
 		p = (a+b+c)/2;
 	    dt = sqrt (p*(p-a)*(p-b)*(p-c));
	 }else {
	 	printf ("ko phai tam giac");
	 }
	 return (dt);
	 
 }
 
 
 
 
 
 
 
 
 
