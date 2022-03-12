#include<stdio.h>
#include<math.h>

double hoanhdo1 (float x[100]){
	printf("nhap hoanh do 1: ");
	scanf("%f",&x[1]);
	return x[1];
}
double tungdo1 (float y[100]){
	printf("nhap tung do 1: ");
	scanf("%f",&y[1]);
	return y[1];
}
double hoanhdo2 (float x[100]){
	printf("nhap hoanh do 2: ");
	scanf("%f",&x[2]);
	return x[2];
}
double tungdo2 (float y[100]){
	printf("\nnhap tung do 2: ");
	scanf("%f",&y[2]);
	return y[2];
}
double kc (float x[100] , float y[100]){
   double	dodai=sqrt(pow(x[2]-x[1],2) + pow(y[2]-y[1],2));
   return dodai;
}
int main(){
	float x[100],y[100];
	printf("\n(%0.2f %0.2f)",hoanhdo1(x),tungdo1(y));
	printf("\n(%0.2f %0.2f)",hoanhdo2(x),tungdo2(y));
	double khoangcach=kc(x,y);
	printf("\nkhoang cach 2 diem bang: %0.2lf" , khoangcach);
}
