#include<stdio.h>

int nhap (int n){
	do {
		printf("nhap n= ");
		scanf("%d",&n);
	}while (n<0);
	return n;
}
void nhapmang (int n, int A[100]){
	int i;
	for (i=0;i<n;i++){
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}
void sapxep (int n , int A[100]){
	int mark=0;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (A[i]>A[j]){
			mark = A[i];
			A[i]=A[j];
			A[j]=mark;
			}
		}
	}
	for (int i=0;i<n;i++){
		printf("%d\t",A[i]);	
	}
}
void tanso (int n , int A[100]){
  	int i=0;
  	while (i<=n){
  	for (j=i+1;j<n;j++){
  		int dem=1;
  		if (A[i]==A[j]){
  			dem++;
		}
	}
	printf("so lan xuat hien cua %d la: %d",A[i],dem);
	i=i+dem;
	}
}
int main(){
	int n,A[100];
	n=nhap(n);
	nhapmang(n,A);
	sapxep(n,A);
	tanso (n,A);
}
