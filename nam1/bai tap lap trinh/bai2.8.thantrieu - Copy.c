#include<stdio.h>
#include<math.h>

 int main (){
 	int a ,b   ;
 	printf ("nhap a=");
 	scanf ("%d",&a);
 	printf ("nhap b=");
 	scanf ("%d",&b);
 	if (a>=0 && b>=0){
 		  if (a==0 && b==0){
 		  	printf("khong co UCLN , BCNN");
		}else if (a==0 || b==0){
			printf ("khong co BCNN , UCLN = %d");
		}else {
			int bc=a*b;
			while (a!=b){
				if (a>b){
					a=a-b;
				}else {
					b=b-a;
				}
			}
			printf ("UCLN = %d",b);
			printf ("BCLN=%d",bc/b);
		}
	}else {
		printf ("hay nhap a, b >0");
	}
}
