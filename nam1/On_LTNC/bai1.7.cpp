#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile(int *m , int *n , float ***a, FILE *p1){
	fscanf(p1,"%d%d",m,n);
	if (((*a)=(float**)calloc(*m,sizeof(float*)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
	}
	for (int i=0;i<*m;i++){
	if (((*a)[i]=(float*)calloc(*n,sizeof(float)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%f",&(*a)[i][j]);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			printf("%.2f\t",(*a)[i][j]);
		}
		printf("\n");
	}
}
float tinh (int m , int n , float **a , FILE *p2){
	float S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((int)a[i][j]%2==0){
				S+=a[i][j];
			}
		}
	}
	return S;
}
void tim (int m , int n, float **a, FILE *p2){
	float min;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((int)a[i][j]%2==0){
				min=a[i][j];
				break;
			}
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((int)a[i][j]%2==0 && a[i][j]<min){
				min=a[i][j];
			}
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (min==a[i][j]){
				printf("\nPtu chan NN: %.2f nam o hang %d ,cot %d",a[i][j],i+1,j+1);
				fprintf(p2,"\nPtu chan NN: %.2f",a[i][j]);
			}
		}
	}
}
int main(){
	float **a;
	int n,m;
	FILE *p1=fopen("in1.5.txt","r"), *p2=fopen("out1.7.txt","w");
	if (p1==NULL){
		printf("chua co file!");
		exit(0);
	}
	docfile(&m,&n,&a,p1);
	printf("\nS=%.2f",tinh(m,n,a,p2));
	fprintf(p2,"\nS=%.2f",tinh(m,n,a,p2));
	tim(m,n,a,p2);
	free(a);
	fclose(p1);
	fclose(p2);
}

