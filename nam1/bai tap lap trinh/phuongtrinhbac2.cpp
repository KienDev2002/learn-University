#include<stdio.h>
#include<math.h>
#include<conio.h>

 int main (){
 	float a , b ,c , x1,x2 ,x3 ,x ,d;
 	printf ("\n nhap a =");
 	scanf("%d",&a);
 	printf ("\n nhap b =");
 	scanf("%d",&b);
 	printf ("\n nhap c =");
 	scanf("%d",&c);
 	if (a==0){
 		if (b==0 && c==0){
 			printf ("vsn");
		 }else if (b!=0 && c==0){
		 	printf ("vn");
		 }else {
		x=-c/b;
		 }
		 printf ("gia tri x=%f",(float)(-c/b));
	 }else {
	d = b*b -4*a*c;
    if (d>0){
 	x1=(-b+(sqrt(d))/(2*a));
 	x2=(-b-(sqrt(d))/(2*a));
	 }else if (d==0){
	x3=-b/(2*a);
	printf ("\n phuong trinh co nghiem kep",x3);
	 }else {
	 	printf ("pt vo nghiem");
	 }
	 
	 }
 }
