#include<stdio.h>	
#include<math.h>
#include<conio.h>
void chuvi (float a , float b , float c , float p, float cv); 
void dientich(float a , float b , float c , float p , float dt);
 int main (){
 	int a ,b,c,p,cv,dt;
 	printf ("nhap 3 canh cua tam giac a ,b ,c:");
 	scanf ("%d%d%d", &a,&b,&c);
 	chuvi ( a ,  b ,  c ,  p,  cv);
 	dientich ( a ,  b ,  c ,  p,  dt);
 }
 void chuvi (float a , float b , float c , float p, float cv){
 	if ((abs)(b-c)<a&&a<b+c){
 		p= (a+b+c)/2;
 		cv=p*2;
 			 printf ("cv=%f",cv);
	 }else {
	 	printf ("khong tao thanh tam giac");
	 }
 }
 void dientich(float a , float b , float c , float p , float dt){
 	if ((abs)(b-c)<a&&a<b+c){
 	p= (a+b+c)/2;
 	dt= sqrt(p*(p-a)*(p-b)*(p-c));
 	 printf ("/ndt = %f",dt);
 }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
