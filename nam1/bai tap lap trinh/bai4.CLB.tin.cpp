#include<stdio.h>
#include<math.h>
#include<string.h>
struct toado {
	float hoanhdo;
	float tungdo;
};
void nhaptoado (int n, struct toado A[100]);
void intoado (int n, struct toado A[100]);
void demgocthu3 (int n , struct toado A[100]);
float tinhdtvadem (int n , struct toado A[100]);
int main (){
	int i,n;
	struct toado A[100];
	printf ("nhap so diem n=");
	scanf ("%d",&n);
	nhaptoado(n,A);
	intoado(n,A);
	demgocthu3 (n,A);
    tinhdtvadem (n,A);
}
void nhaptoado ( int n, struct toado A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
	printf ("nhap hoanh do diem thu %d la :",i);
	fflush (stdin);
	scanf ("%f",&A[i].hoanhdo);
	printf ("nhap tung do diem thu %d la :",i);
	fflush (stdin);
	scanf ("%f",&A[i].tungdo);\
	}
}
void intoado (int n, struct toado A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("toa do diem thu %d la:",i);
		printf ("(%0.2f , %0.2f)",A[i].hoanhdo, A[i].tungdo);
		printf ("\n");
	}
}
void demgocthu3 (int n , struct toado A[100]){
	printf ("\nso diem nam trong ptu thu 3: ");
	int i;
	int dem =0;
	for  (i=1 ; i<=n ; i++){
		if (A[i].hoanhdo <0 && A[i].tungdo <0){
			dem++;
		}
	}
   printf ("%d diem",dem);
}
float tinhdtvadem (int n , struct toado A[100]){
	int i;
	int d=0;
	float DT=0;
	float max = sqrt (pow (A[1].hoanhdo,2)+pow (A[1].tungdo,2));
	for (i=1 ; i<=n ; i++){
		if ((A[i].hoanhdo > 0 )&& (A[i].tungdo >0)){
			if (sqrt (pow (A[i].hoanhdo,2)+pow (A[i].tungdo,2))>=max ){
				max=sqrt (pow (A[i].hoanhdo,2)+pow (A[i].tungdo,2));
				DT=DT+(max*max*M_PI);
			}
		}
	}
    for (i=1 ; i<=n ; i++){
		if ((A[i].hoanhdo <0 )||(A[i].tungdo<0)&& sqrt (pow (A[i].hoanhdo,2)+pow (A[i].tungdo,2))>max){
			d++;
		}	
	}
printf ("\nDT=%0.2f",DT);
printf ("\nso diem nam ngoai duong tron la : %d diem",d);
}



























