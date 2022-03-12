#include<stdio.h>


int main(){
	int i=0,x,j,n,A[100];
	printf("nhap n= ");
	scanf("%d",&n);
	while (i<=n){
		printf("nhap gia tri thu %d la: ",i);
		scanf("%d",&x);
		int mark=1;
		for (j=0;j<i;j++){
			if (A[j]==x){
				mark =0;
				break;
			}
		}
		if (mark==1){
			A[i]=x;
			i++;
		}else{
			printf("vui long nhap lai !");
		}
	}
	for (i=0;i<n;i++){
		printf("%d",A[i]);
	}
}
