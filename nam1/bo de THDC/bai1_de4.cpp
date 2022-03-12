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
float mau (int n ,int A[100]){
	int i;
	float mau=0;
	for (i=1;i<=n;i++){
		mau=mau+A[i];
	}
	return mau;
}
 float tinh (int n , int A[100]){
	int i;
	float S=2021;
	for (i=1;i<=n;i++){
		S=S+(pow(A[i],i)/i);
	}
	return sqrt (S); 
}
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	nhapin (n,A);
	printf("\n S= %0.2f",sqrt(1/mau(n,A)));
	printf("\n S= %0.2f",tinh (n,A));	
}
