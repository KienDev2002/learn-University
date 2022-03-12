#include <stdio.h>
#include<math.h>
struct toado {
   double x;
   double y;
};
double kc1 (toado A[100]){
	double a=sqrt(pow (A[2].x-A[1].x,2) + pow (A[2].y-A[1].y,2));
    return a;
}
double kc2 (toado A[100]){
	double b= sqrt(pow (A[3].x-A[2].x,2) + pow (A[3].y-A[2].y,2));
    return b;
}
double kc3 (toado A[100]){
	double c=sqrt(pow (A[3].x-A[1].x,2) + pow (A[3].y-A[1].y,2));
    return c;
}
int main(){
	int i=1;
	toado A[100];
    do{
   		printf("nhap hoang do diem thu %d la: ",i);
		scanf("%lf",&A[i].x);
        printf("nhap tung do diem thu %d la: ",i);
		scanf("%lf",&A[i].y);  
		i++;
	}while(i<4);
    double p = ( kc1(A) + kc2(A) + kc3(A) ) / 2;
    double dt = sqrt(p * ( p - kc1(A) ) * (p - kc2(A) ) * (p - kc3(A)) );
    printf("\n dien tich tam giac bang: %0.2lf ",dt);
}
