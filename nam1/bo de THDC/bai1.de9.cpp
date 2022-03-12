#include<stdio.h>
#include<math.h>
void TBN (int n , float A[100][100], int m);
void nhonhat (int n , float A[100][100], int m);
int main (){
	int n,m;
	float A[100][100];
	float x;
	printf("nhap m hang: ");
	scanf ("%d",&m);
	printf("nhap n cot: ");
	scanf ("%d",&n);
	printf("nhap ma tran: ");
	for (int i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
		printf("A[%d][%d]=",i,j);
	scanf ("%f",&A[i][j]);
		}
	}
	for (int i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
		printf("%0.2f\t",A[i][j]);
		}
		printf("\n");
	}
	TBN (n,A,m);
	nhonhat (n,A,m);
}
void TBN (int n , float A[100][100] , int m){
	int i,j;
	float S=1;
	int dem=0;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (A[i][j]<=100 && A[i][j]>=10){
				S=S*A[i][j];
				dem++;
			}
		}
	}
	if (dem==0){
		printf("\nkhong co TBN nao trong doan 10 den 100");
	}else{
		float kq=pow(S,(1.0/dem));
		printf("\nTBN=%0.2f",kq);
	}
}
//tim diem nho nhat duoi duong cheo phu
void nhonhat (int n , float A[100][100], int m){
	int i,j;
	float min=A[n][n-1];
	if (m!=n){
		printf("\nkhong phai la ma tran vuong");
	}else{
		for (i=1 ; i<=m ; i++){
			for (j=1 ; j<=n ; j++){
				if (i+j>n+1&&min>A[i][j]){
                    min= A[i][j];					
				}
			}
		}
	}
	printf("\n gia tri nho nhat duoi duong cheo phu la: %0.2f ",min);
}













