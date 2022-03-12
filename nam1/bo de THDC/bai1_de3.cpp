#include<stdio.h>

void nhapin (int n , int A[100]){
	int i;
	for(i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
    for(i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}	
}
void csc (int n , int A[100]){
	int i;
	for (i=2;i<=n;i++){
		if(A[i-1]+A[i+1]==2*A[i]){
			printf("%d %d %d ",A[i-1],A[i],A[i+1]);
		}
	}
}
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	nhapin (n,A);
	csc(n,A);
}
