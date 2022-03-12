#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n, int ***a, FILE *p1){
	fscanf(p1,"%d",n);
	if (((*a) = (int**)malloc((*n)*sizeof(int*)))==NULL){
		printf("\nChua co bo nho;");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		if (((*a)[i] = (int*)malloc((*n)*sizeof(int)))==NULL){
		printf("\nChua co bo nho;");
		exit(0);	
		}
	}
	for (int i=0;i<*n;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%d\n",&(*a)[i][j]);
		}
	}
}
void in (int n , int **a, FILE *p2){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			fprintf(p2,"%d\t",a[i][j]);
			printf("%d\t",a[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void GTLN (int n , int **a){
	int max = INT_MIN;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (max<a[i][j]){
				max = a[i][j];
			}
		}
	}
	printf("\n GTLN cua mt la: %d",max);
}
int ktra (int n , int **a){
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if ((i==j&&a[i][j]==0)||(i<j&&a[i][j]==0)||(i>j&&a[i][j]!=0)){
				return 0;
			}
		}
	}
	return 1;
}
void GTNNtren (int n , int **a){
	int min = INT_MAX;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i+j<n-1&&a[i][j]<min){
				min = a[i][j];
			}
		}
	}
	printf("\n GTNN phia tren dcp cua mt la: %d",min);
}
int main(){
	int n;
	int **a;
	FILE *p1 = fopen("matran.txt","r"), *p2 = fopen("outmt.txt","w");
	if (p1==NULL){
		printf("\n Chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in (n,a,p2);
	GTLN(n,a);
	if (ktra(n,a)==1){
		printf("\n Mtran A  la mtran tam giac duoi");
	}else{
			printf("\n Mtran A khong phai la mtran tam giac duoi");
	}
	GTNNtren(n,a);
	int fcloseall(void);
	for (int i=0;i<n;i++){
		free(a[i]);
	}
	free(a);
}

