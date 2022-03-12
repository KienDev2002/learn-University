#include<math.h>
#include<stdio.h>

int main(){
	int n,i,x,dem=0,S=0,min,luui;
	do{
		printf("nhap n= ");
		scanf("%d",&n);
	}while (n<=0 || n>30);
	int A[100];
	for (int i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
		printf("\nnhap x= ");
		scanf("%d",&x);
		for (i=1;i<=n;i++){
			if (A[i]%x !=0){
				printf("\nso khong chia het cho x: %d\t",A[i]);
				dem++;
				S+=A[i];
			}
		}
		printf("\n TBC = %0.2f", (float)S/dem);
	for (i=1;i<=n;i++){
		if (A[i]%2==0){
			min =A[i];
		}
	}
	for (i=1;i<=n;i++){
		if ((A[i]%2==0) && ( A[i] < min )){
		min=A[i];
	}	
	}
 	printf("\nso chan nho nhat la: %d",min);
}
