#include<stdio.h>	
#include<math.h>
#include<conio.h>
float chuvi (float a , float b , float c ,  float p , float cv);
float dientich (float a , float b , float c ,  float p , float dt);
int main (){
	float a ,b,c,p,cv,dt;
	printf ("nhap 3 canh cua tam giac a,b,c=");
	scanf ("%f%f%f",&a,&b,&c);
	printf ("cv = %f", chuvi ( a ,  b ,  c ,   p ,  cv));
	printf ("\n dt = %f",dientich ( a ,  b ,  c ,   p ,  dt));
}
float chuvi (float a , float b , float c ,  float p , float cv){
	if  ((abs)(b-c)<a && a<b+c){
		p = (a+b+c)/2;
		cv=p*2;
	}else {
		printf ("khong tao thanh tam giac");
	}
		return (cv) ;
}
float dientich (float a , float b , float c , float p , float dt){
		if((abs)(b-c)<a && a<b+c){
		p = (a+b+c)/2;
		dt = sqrt (p*(p-a)*(p-b)*(p-c));
}
return (dt);
}





















