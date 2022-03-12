#include<stdio.h>

int main(){
	int i=1,x,n;
	int A[100];
	printf("nhap n phan tu: ");
	scanf("%d",&n);
	while(i<=n){
		int ok=1;
		printf("\n nhap lai phan tu thu %d la: ",i);
		scanf("%d",&x);
		for (int j=1 ; j<=i ; j++){
			if (A[j]==x){
				ok=0;
				break;
			}
		}
		if (ok==1){
	       A[i]=x;
	       i++;
		}else{
			printf("phan tu nay da ton tai");
		}
	}
	for (i=1 ; i<=n ; i++){
		printf("%d\t",A[i]);
	}
}
