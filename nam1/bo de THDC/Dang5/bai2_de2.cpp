#include<stdio.h>
#include<math.h>

int main(){
	int n, A[100],dem=0,i,tong[100],d=2;
	printf("nhap n: ");
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
	printf("\n");
	 tong[2]=0;
	for (i=2;i<=n;i++){
		tong[d]=A[i-1]+A[i];
		d++;
	}
	for (i=2;i<=n;i++){
		if(tong[i] % 10 ==0){
			dem++;
			A[i-1]=tong[i];
			A[i]=tong[i];
		}
	}
	if (dem==0){
		printf("khong co cap nao ma tong  nao chia het ch0 10");
	}else {
		for (i=1;i<=n;i++){
			printf("%d\t",A[i]);
		}
	}
}
