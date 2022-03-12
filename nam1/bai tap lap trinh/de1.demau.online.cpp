#include<stdio.h>
#include<math.h>
void indayso (int n , float A[100]);
int main(){
	int n,m;
	float A[100],B[100];
	printf("nhap bac cua P:n= ");scanf("%d",&n);
	printf("\nnnhap cac he so cua P: \n");
	for (int i=0 ; i<=n ; i++){
		printf ("A[%d]=",i);
		scanf("%f",&A[i]);
	}
	printf("nhap bac cua Q:m= ");scanf("%d",&m);
	printf("\nnnhap cac he so cua Q: \n");
	for (int i=0 ; i<=m ; i++){
		printf ("B[%d]=",i);
		scanf("%f",&B[i]);
	}
	printf("cac he so cua P la: ");
	indayso(n,A);
	printf("\ncac he so cua Q la: ");
	indayso(m,B);
}
void indayso (int n , float A[100]){
	int i;
	for (i=0 ; i<=n ; i++){
		printf("%10.1f",A[i]);
	}
}







