#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void nhapin (int n , float **A , int m);
void TBN (int n , float **A , int m);
void duoicheophu (int n , float **A, int m);
int main(){
	int n,m;
	float **A=NULL;
	A=(float**)malloc(m*sizeof(float*));
	for (int i=0;i<m;i++){
		A[i]=(float*)malloc(n*sizeof(float));
	}
	printf("nhap m hang: ");
	scanf ("%d",&m);
	printf("nhap n cot: ");
	scanf("%d",&n);
	nhapin (n,A,m);
	TBN (n,A,m);
	duoicheophu (n,A,m);
}
void nhapin (int n , float **A , int m){
	int i,j;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf("nhap A[%d][%d]=",i,j);
			scanf ("%f",&A[i][j]);
		}
	}
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf("%0.2f\t",A[i][j]);
		}
		printf("\n");
	}
}
void TBN (int n , float **A , int m){
	int i,j,dem=0;
	float S=1;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (A[i][j]>=10&&A[i][j]<=100){
				S=S*A[i][j];
				dem++;
			}
		}
	}
	if (dem==0){
		printf("\nkhong co ptu nao thoa man 10 den 100");
	}else{
		float kq=pow(S,1.0/dem);
		printf("\n TBN=%0.2f",kq);
	}
}
void duoicheophu (int n , float **A , int m){
	float min;
	int i,j;
	if (m!=n){
		printf("\n khong phai la ma tran vuong. vui long nhap mt vuong!");
	}else{
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (i>j){
				min=A[i][j];
				break;
			}
		}
	}
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (i>j&&A[i][j]<min){
				min=A[i][j];
			}
		}
	}
		for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (min==A[i][j]){
				printf("\n ptu nho nhat duoi duong cheo phu la: %0.2f",A[i][j]);
			}
		}
	}
	}
}
























