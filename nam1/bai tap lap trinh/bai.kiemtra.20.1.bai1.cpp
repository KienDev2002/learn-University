#include<stdio.h>
#include<math.h>
#include<conio.h>
void inmang (int n , float a[100]);
void GT (int n , float a[100]);
int main (){
	int i , n ;
	float a[100];
	printf ("nhap n=");
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++){
		printf ("nhap a[%d]=",i);
		scanf ("%f",&a[i]);
	}
	inmang (n,a);
	GT(n,a);
}
void inmang (int n , float a[100]){
	int i ;
	for (i=1 ; i<= n ; i++){
		printf ("%0.1f\t",a[i]);
	}
}
void GT (int n , float a[100]){
	float S=2021;
	int i ;
	for (i=1 ; i<=n ;i++){
		S=S+(pow (a[i],i)/i);
	}
	if (S<0){
		printf ("khong khai can");
	}else {
		printf ("\n S=%0.2f",(sqrt)(S));
	}
}



















