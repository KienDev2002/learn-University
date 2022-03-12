#include<stdio.h>
void xoamang (int n, int A[100]){
	int i,t;
	printf("nhap vi tri can xoa la: ");
	scanf("%d",&t);
	for (i=t;i<n;i++){
		A[i]=A[i+1];
	}
	n--;
	for (i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}
int main(){
	int i,n,A[100],x,k;
	printf("nhap n= ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
	printf("nhap so can chen la: ");
	scanf("%d",&x);
	printf("nhap vi tri can chen la: ");
	scanf("%d",&k);
	for (i=n+1;i>=k;i--){
		A[i]=A[i-1];	
	}
	A[k]=x;
	n++;
	for (i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
	xoamang(n,A);
}

