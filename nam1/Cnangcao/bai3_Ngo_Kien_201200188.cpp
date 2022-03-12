#include <stdio.h>
#include <math.h>
#define size 100
void nhap (int n , float *x,float *y){
	int i;
	float *p=x;
	float *ptr=y;
		for (i=0; i<n ; i++){
		printf ("day diem thu %d =",i+1);
		scanf ("%f",&p[i]);
		scanf ("%f",&ptr[i]);
	}
}
float tinhkc (int n , float *x , float *y){
	int i;
	float *ptr=y;
	float c[size];
	c[0]=1;
	for (i=0;i<n;i++){
		c[i]=*(ptr+i);
	}
	for (i=0;i<n;i++){
		printf("\nkhoach cach diem thu %d den truc hoanh la: %0.2f",i+1,c[i]);
	}
}
void GTLN (int n , float x[] , float y[]){
	float *p=x;
	float *ptr=y;
	float max= sqrt ( pow ( *(p+1)- *(p+0), 2 ) + pow ( *(ptr+1)-*(ptr+0), 2 ) );
	for (int i=2;i<n;i++){
		if ((sqrt ( pow (*(p+i)-*(p+i-1),2 ) + pow ( *(ptr+i)-*(ptr+i-1) , 2 ) ) )>max){
			max=(sqrt ( pow (*(p+i)-*(p+i-1),2 ) + pow ( *(ptr+i)-*(ptr+i-1) , 2 ) ) );
		}
	}
	for (int i=0;i<n;i++){
		if (max==(sqrt ( pow (*(p+i)-*(p+i-1),2 ) + pow ( *(ptr+i)-*(ptr+i-1) , 2 ) ) )){
			printf("\n 2 diem do la : ( %0.2f ; %0.2f ),( %0.2f ; %0.2f ) voi do dai la lon nhat: %0.2f",*(p+i),*(ptr+i),*(p+i-1),*(ptr+i-1) ,max);
		}
	}
}
int main (){
	int n;
	float x[size],y[size];
	printf ("nhap so diem n=");
	scanf ("%d",&n);
	nhap(n,x,y);
	tinhkc(n,x,y);
	GTLN(n,x,y);
}

