#include<stdio.h>

int main(){
	int n,A[100],i,j,stemp,S=0,S2=0;
	printf("nhap n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
	for (i=1;i<n;i++){
		for (j=i+1;j<=n;j++){
			if (A[i]<0 && A[i]>A[j]){
				stemp=A[i];
				A[i]=A[j];
				A[j]=stemp;
			}
		}	
	}
	printf("\n");
	for (i=1;i<=n;i++){
		if (A[i]<0){
			S+=A[i];
		printf("%d\t",A[i]);	
		}
	}
	printf("\n tong = %d",S);
	for (i=1;i<n;i++){
		for (j=i+1;j<=n;j++){
			if (A[i]>0 && A[i]<A[j]){
				stemp=A[i];
				A[i]=A[j];
				A[j]=stemp;
			}
		}	
	}
	printf("\n");
	for (i=1;i<=n;i++){
		if (A[i]>0){
			S2+=A[i];
		printf("%d\t",A[i]);	
		}
	}
	printf("\n tong = %d",S2);
}
