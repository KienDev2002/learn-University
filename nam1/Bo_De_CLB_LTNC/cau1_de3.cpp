#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile(int *n , float **a , FILE *p1){
	fscanf(p1,"%d",n);
	if (((*a)=(float*)malloc((*n)*sizeof(float)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<=*n;i++){
		fscanf(p1,"%f",&(*a)[i]);
	}
}
float tinh (int n , float *a){
	float S=0;
	for (int i=0;i<=n;i++){
		S+=a[i]*pow(5,i);
	}
	return S;
}
float daoham (int n , float *a){
	float S=a[1];
	for (int i=2;i<=n;i++){
		S+=a[i]*i*pow(5,i-1);
	}
	return S;
}
float conghaidathuc (int n , float *a){
	float *c,S1=0,S2=0;
	int m;
	printf("\n Nhap Bac cua C:");
	scanf("%d",&m);
		if (((c)=(float*)malloc(m*sizeof(float)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<=m;i++){
		printf("c[%d]=",i);
		scanf("%f",&c[i]);
	}
	for (int i=0;i<=m;i++){
		S1+=c[i]*pow(3,i);
	}
	for (int i=0;i<=n;i++){
		S2+=a[i]*pow(3,i);
	}
	printf("\nS1=%.3f",S1);
	printf("\nS2=%.3f",S2);	
	return S1+S2;
}
int main(){
	int n;
	float *a;
	FILE *p1 = fopen("dathuc72.txt","r");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	printf("\n Gia tri da thuc tai x= 5: %.2f",tinh(n,a));
	printf("\n Gia tri dao ham tai x= 5: %.2f",daoham(n,a));
	printf("\n Gia tri cong hai da thuc x= 5: %.2f",conghaidathuc(n,a));
	int fcloseall(void);
	free(a);
}

