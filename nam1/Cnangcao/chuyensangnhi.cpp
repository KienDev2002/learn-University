#include<stdio.h>
#include<math.h>
void chuyenheso (int n, int A[10000]);
int main(){
	int n;
	int A[10000];
	printf("nhap n= ");
	scanf("%d",&n);
	chuyenheso (n,A);
}
void chuyenheso (int n, int A[10000]){
	int i,dem=0;
	for (i=1;n;i++){
		A[i]=n%2;
		n=n/2;	
		dem++;
	}
	for (i=dem;i>0;i--){
			printf("%d",A[i]);
	}
}

