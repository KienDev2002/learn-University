#include<stdio.h>
#include<math.h>

int main(){
	int n,i,A[100],stemp,j;
	do {
		printf("nhap n: ");
		scanf("%d",&n);
	}while (n<0 || n>100);
		for (int i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
	for (int i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}
//	for (i=1;i<n;i++){
//		for (j=i+1;j<=n;j++){
//			if (A[i]<A[j]){
//				stemp=A[i];
//				A[i]=A[j];
//				A[j]=stemp;
//			}
//		}
//	}
//	i=1;
//	while (i<n ){
//		int dem=1;
//		for (j=i+1;j<=n;j++){
//			if (A[i]==A[j]){
//				dem++;
//			}else{
//				break;
//			}
//		}
//		printf("\n so lan xuat hien cua %d la: %d",A[i],dem);
//		i=i+dem;
//	}
  	int f[10000]={};
  	int dem=0,max=0;
	for (i=1;i<=n;i++){
		f[A[i]]++;
		if (A[i]>max){
			max=A[i];
		}	
	}
	for (i=1;i<max;i++){
		if (f[A[i]]>=1){
			printf("\n%d\t",f[A[i]]);
		}
	}
	printf("\n%d",dem);
}
