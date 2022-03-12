#include<string.h>
#include<stdio.h>
#include<math.h>
struct toado {
    float  hoanhdo;
    float tungdo;
};
void nhaptoado ( int n, struct toado A[100]);
void khoangcach (int n , struct toado A[100]);
int main (){
 int n ;
 struct toado A[100];
 printf ("nhap n day diem =");
 scanf ("%d",&n);
 nhaptoado (n,A);
 khoangcach (n,A);
}
	void nhaptoado ( int n, struct toado A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
	printf ("nhap hoanh do diem thu %d la :",i);
	fflush (stdin);
	scanf ("%f",&A[i].hoanhdo);
	printf ("nhap tung do diem thu %d la :",i);
	fflush (stdin);
	scanf ("%f",&A[i].tungdo);
	}
}
void khoangcach (int n , struct toado A[100]){
	int i;
	float S=0;
	for (i=1 ; i<=n ; i++){
		S=S+(sqrt (pow (2-A[i].hoanhdo,2)+pow (3-A[i].tungdo,2)));
	}
	printf ("\nS=%f",S);
}










