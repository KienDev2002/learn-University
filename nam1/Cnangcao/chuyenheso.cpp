#include<stdio.h>
void chuyenheso (int n , int A[100]){
	int dem=0;
	for (int i=1;n;i++){
		A[i]=n%2;
		n/=2;
		dem++;	
	}
	for (int i=dem;i>0;i--){
		printf("%d",A[i]);
	}
}
int main(){
	int n;
	int A[100];
	printf("nhap n: ");
	scanf("%d",&n);
	chuyenheso (n,A);
}
