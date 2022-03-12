#include<stdio.h>

int main (){
	int n,k,i,x;
	int A[100];
	printf("nhap n phan tu: ");
	scanf("%d",&n);
	for (i=1;i<=n ;i++){
		printf("nhap A[%d]=",i);
		scanf("%d",&A[i]);
	}
	printf("\n nhap vi tri can chen la: ");
	scanf("%d",&k);
	printf("\n nhap so chen la: ");
	scanf("%d",&x);
	for (i=n+1;i>=k;i--){
		A[i]=A[i-1];
	}
	A[k]=x;
	n++;
	printf("\n cac so sau khi nhap la: ");
	for (i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
}
