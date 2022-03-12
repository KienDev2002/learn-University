#include<string.h>
#include<stdio.h>
#include<math.h>
struct phanso {
	int tu ;
	int mau;
};
void nhapphanso (phanso A[100]);
void tinh (phanso A[100]);

int main (){
	phanso A[100];
	nhapphanso(A);
	tinh(A);
}
void nhapphanso ( phanso A[100]){
	for (int i=1 ; i<=2 ; i++){
		printf ("nhap tu so %d=",i);
	fflush(stdin);
	scanf ("%d",&A[i].tu);
		printf ("nhap mau so %d=",i);
	if (A[100].mau==0){
		printf ("hay nhap tu khac khong");
	}else {
		scanf("%d",&A[i].mau);
	}
	}
}
void tinh (phanso A[100]){
	int i;
	float S=0;
	for (i=1 ; i<=2 ; i++){
		S=S+(A[i].tu/A[i].mau);
	}
printf ("\n%0.2f",S);
}






