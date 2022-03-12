#include<stdio.h>
#include<math.h>
int giaipt (){
	float a,b,c;
	printf("nhap a va b va c: ");
	scanf("%f %f %f",&a,&b,&c);
//	if (a==0){
//		float x1=-c/b;
//		printf("%0.2f",x1);
//	}else{
		float d=b*b-4*a*c;
		if (d<0){
			return 0;
		}
		if (d==0){1
			float x=(-b)/(2*a);
			return x;
		}
		if (d>0){
			float x1=(-b+sqrt(d))/(2*a);
			return x1;
		}
	}
int main(){
	printf("%0.2f",giaipt());
}
