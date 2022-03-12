#include<stdio.h>
#include<math.h>
#include<string.h>
 #define size 100
void nhapin (int m, int n , float *a){
	int i,j;
	float *p=(float*)a;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%f",p+i*n+j);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%0.2f\t",*(p+i*n+j));
		}
		printf("\n");
	}
}
float tong (int m , int n , float *a){
	int i,j;
	float *p=(float*)a;
	float s=0;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			s+= *(p+i*n+j);
		}
	}
	return s;
}
float ptuam (int m , int n , float *a){
	int i,j;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			if (*(a+i*n+j)<0){
				return *(a+i*n+j);
			}
		}
	}
	return 1;
}
void xoay90do (int m , int n , float *a){
	printf("\n ma tran xoay 90 do la: \n");
	int i,j;
	float *p=(float*)a;
	for (j=0;j<n;j++){
		for (i=m-1;i>=0;i--){
			printf("%0.2f\t",*(p+i*n+j));		
		}
		printf("\n");
	}
}
void sapxep (int m , int n , float *a){
	printf("\n ma tra sau khi sap xep la: \n");
	int i,j;
	int dem=0;
	float c[50];
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			c[dem]=(*(a+i*n+j));
			dem++;
		}
	}
	float *p=c;
	for (i=0;i<dem-1;i++){
		for (j=i+1;j<dem;j++){
			if ( *(p+i) > *(p+j) ){
				float stemp=*(p+i);
			}
		}
	}
	dem=0;
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			*(a+i*n+j)=c[dem];
			dem++;
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			printf("%0.2f\t",*(a+i*n+j));
		}
		printf("\n");
	}
}
int doixung (float a[size][size] , int m ,int n){
	int i,j;
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			if (a[i][j]!=a[j][i]){
				return 0;
			}
		return 1;
}
int main(){
	float a[size][size];
	int m,n;
	printf("nhap m: ");
	scanf("%d",&m);
	printf("nhap n: ");
	scanf("%d",&n);
	nhapin(m,n,(float*)a);
	printf("\n gia tri s= %0.2f",tong(m,n,(float*)a));
	printf("\n gia tri am la: %0.2f",ptuam(m,n,(float*)a));
	xoay90do(m,n,(float*)a);
	sapxep(m,n,(float*)a);
	if (doixung(a,m,n)==1){
		printf("\n ma tran nay la ma tran doi xung qua dc");
	}else{
		printf("\n ma tran nay la ma tran khong doi xung qua dc");
	}
}

