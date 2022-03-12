#include<stdio.h>
#include<math.h>
#include<string.h>
void vao_matran (float *a , int N , int m , float *b){
	int i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%f",a+i*N+j);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("\nb[%d][%d]=",i,j);
			scanf("%f",b+i*N+j);
		}
	}	
}
void ra_matran (float *a , int N , int m , float *b){
	int i,j;
		printf("ma tran A la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("%0.2f\t",*(a+i*N+j));
		}
		printf("\n");
	}
		printf("\nma tran B la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("%0.2f\t",*(b+i*N+j));
		}
		printf("\n");
	}
}
void nhan_matran ( float *a , int N , int m , float *b , float *c){
	int i,j,k;
	printf("\n tich 2 ma tran la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			for (k=1;k<=m;k++){
				*(c+i*N+j)=*(a+i*N+j)*(*(b+j*N+k));
			}
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("%0.2f\t",*(c+i*N+j));
		}
		printf("\n");
	}
}
void cong_matran (float *a,int N , int m , float *b , float *d){
	int i,j;
	printf("\ntong 2 ma tran la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			*(d+i*N+j)=*(a+i*N+j)+(*(b+i*N+j));
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=m;j++){
			printf("%0.2f\t",*(d+i*N+j));
		}
		printf("\n");
	}
}
int main(){
	float a[20][20], b[20][20],c[20][20],d[20][20];
	vao_matran((float *)a ,3,3,(float*)b);
	ra_matran ((float*)a ,3,3, (float*)b);
	nhan_matran((float*)a ,3,3,(float*)b,(float*)c);
	cong_matran((float*)a , 3,3,(float*)b,(float*)d);
}














