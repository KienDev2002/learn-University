#include<stdio.h>
void timvitri (int n , int x,int A[100]);
int main (){
	int n,x;
	int A[100];
	printf("\n nhap n= ");
	scanf ("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf("\n nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for (int i=1 ; i<=n ; i++){
		printf("%d\t",A[i]);
	}
	timvitri(n,x,A);
}
void timvitri (int n , int x , int A[100]){
	int i,dem=0;
	printf("nhap x=");
	scanf("%d",&x);
	printf("nhung vi tri co gia tri x la: ");
	for (i=1 ; i<=n ; i++){
		if (A[i]==x){
			dem++;
			printf("\nA[%d],",i);
		}
	}
	if (dem==0){
		printf("\n khong co gia tri nao bang x");
	}
}








