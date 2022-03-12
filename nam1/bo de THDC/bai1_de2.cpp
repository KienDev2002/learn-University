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
float tinh (int n , int A[100]){
	float S=2021;
	for (int i=1;i<=n;i++){
		S=S+((A[i]+2*i+1)/(2*i+7));
	}
	return sqrt(S);
}
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	nhapin (n,A);
	printf("%0.2f",tinh(n,A));
}
