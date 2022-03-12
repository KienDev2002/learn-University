#include<stdio.h>
#include<math.h>
#include<string.h>
struct toado {
   float x;
   float y;	
};
void nhapin (int n , toado A[100]);
void ganA (int n , toado A[100], float xa , float ya);
void cat (int n , toado A[100]);
void cato (int n , toado A[100]);
void tim (int n , toado A[100]);
int main(){
	int n;
	toado A[100];
	float xa,ya;
	printf("nhap n day diem: ");
	scanf ("%d",&n);
	printf("nhap toa do diem A: ");
	scanf ("%f%f",&xa,&ya);
	nhapin (n,A);
	ganA(n,A,xa,ya);
	cat (n,A);
	cato (n,A);
	tim (n,A);
}
void nhapin (int n , toado A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap hoanh do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].x);
		printf("nhap tung do diem thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].y);
	}
	printf("toa do cac diem la: ");
	for (i=1 ; i<=n ; i++){
		printf("(%0.2f , %0.2f),",A[i].x,A[i].y);
	}
}
//tim diem xa diem A nhat
void ganA (int n , toado A[100], float xa , float ya){
	printf("\n diem xa A nhat la: ");
	int i;
	int luu;
	float max= sqrt (pow (A[1].x-xa,2)+ pow (A[1].y-ya,2));
	for (i=1 ; i<=n ; i++){
		if (sqrt (pow (A[i].x-xa,2)+ pow (A[i].y-ya,2))>max){
			max=sqrt (pow (A[i].x-xa,2)+ pow (A[i].y-ya,2));
			luu=i;
		}
	}
	printf("(%0.2f , %0.2f)",A[luu].x,A[luu].y);
}
//dem xem co bao nhieu diem cat dt x=y
void cat (int n , toado A[100]){
	int i;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if (A[i].x==A[i].y){
			d++;
		}
	}
	printf("\nco %d diem cat duong thang x=y",d);
}
//dem xem co bao nhieu dt cat duong tron tam O ban kinh bang 5
void cato (int n , toado A[100]){
	int i;
	int dd=0;
	for (i=1 ; i<=n ; i++){
		if (pow (A[i].x,2)+pow(A[i].y,2)<25){
			dd++;
		}
	}
	printf("\nco %d duong thang cat duong tron tam O ban kinh bang 5",dd);
}
//tim duong tron nhat nhat bao quanh cac diem
void tim (int n , toado A[100]){
	int i;
	float BKmax= sqrt (pow(A[1].x,2)+pow(A[1].y,2));
	for (i=1 ; i<=n ; i++){
		if (sqrt (pow(A[i].x,2)+pow(A[i].y,2))>BKmax){
			BKmax=sqrt (pow(A[i].x,2)+pow(A[i].y,2));
		}
	}
	printf("\nban kinh duong tron nho nhat chua tat ca cac diem co ban kinh la: %0.2f ",BKmax);
}













