#include<stdio.h>
#include<math.h>
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
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	nhapin (n,A);
}
