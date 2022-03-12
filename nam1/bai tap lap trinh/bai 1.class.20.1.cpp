#include<stdio.h>
#include<math.h>
#include<conio.h>
void ina ( int n , float A[100]);
float tinhtong (int n , float A[100],float a);
void inb ( int m, float B[100]);
void tinhPcongQ (int n, float A[100],float B[100],int m);
void tinhPtruQ (int n, float A[100],float B[100],int m);

int main (){
	int n,m;
	float A[100];
	float B[100];
	float a,b;
	printf ("nhap n=");
	scanf ("%d",&n);
	printf ("nhap m=");
	scanf ("%d",&m);
	for (int i=0 ; i<=n ;i++){
	printf ("nhap A[%d]=",i);
	scanf ("%f",&A[i]);
	}
	for (int i=0 ; i<=n ;i++){
	printf ("nhap B[%d]=",i);
	scanf ("%f",&B[i]);
	}
	printf ("nhap a=");
	scanf ("%f",&a);
	printf ("nhap b=");
	scanf ("%f",&b);
	ina (n,A);
    printf ("%0.2f+%0.2f=%0.2f",tinhtong (n,A,a),tinhtong (n,A,b),tinhtong (n,A,a)+tinhtong (n,A,b));
    inb (m,B);
    tinhPcongQ(n,A,B,m);
    tinhPtruQ(n,A,B,m);
}
//phan 1
void ina ( int n , float A[100]){
	printf ("\nmang a la:");
	int i;
	for (i=0 ; i<=n ; i++){
		printf ("%0.2f\t",A[i]);
	}
}
//phan 2
float tinhtong (int n , float A[100],float a){
	printf ("\n");
	float S=0;
	for (int i=0 ; i<=n ; i++){
		S=S+(A[i]*pow(a,i));
	}
	return S;
}
// phan 3
void inb ( int m , float B[100]){
	printf ("\n\n\nmang b la :");
	int i;
	for (i=0 ; i<=m ; i++){
		printf ("%0.2f\t",B[i]);
	}
}
// phan 4,5
void tinhPcongQ (int n, float A[100],float B[100] , int m){
	int i ;
	printf ("\n\n cac he so cua P(x)+Q(x) la :");
	if (n>=m){
		for (i=0 ; i<=n ; i++){
			printf ("%7.2f",A[i]+B[i]);
		}
	}else {
		for (i=0 ; i<=m ;i++)
            {
	          printf ("%7.2f",A[i]+B[i])  ;
	        }
		}
}
void tinhPtruQ (int n, float A[100],float B[100],int m){
	int i ;
	printf ("\n\n cac he so cua P(x)-Q(x) la :");
	if (n>=m){
		for (i=0 ; i<=n ; i++){
			printf ("%7.2f",A[i]-B[i]);
		}
	}else {
		for (i=0 ; i<=m ;i++)
            {
	          printf ("%7.2f",A[i]-B[i])  ;
	        }
		}
}





























