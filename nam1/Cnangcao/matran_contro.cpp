#include<stdio.h>
#include<math.h>
#include<string.h>
void vao_matran (float *a , int N , int m , float *b){
	int i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=N;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%f",a+i*N+j);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=N;j++){
			printf("\nb[%d][%d]=",i,j);
			scanf("%f",b+i*N+j);
		}
	}	
}
void ra_matran (float *a , int N , int m , float *b){
	int i,j;
		printf("ma tran A la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=N;j++){
			printf("%0.2f\t",*(a+i*N+j));
		}
		printf("\n");
	}
		printf("\nma tran B la: \n");
	for (i=1;i<=m;i++){
		for (j=1;j<=N;j++){
			printf("%0.2f\t",*(b+i*N+j));
		}
		printf("\n");
	}
}
int main(){
	float a[20][20], b[20][20];
	vao_matran((float *)a ,4,3,(float*)b);
	ra_matran ((float*)a ,4,3, (float*)b);
}

