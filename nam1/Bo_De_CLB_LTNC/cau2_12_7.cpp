#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct NV {
	char M[100];
	char HT[100];
	int T;
	char Q[100];
	int DS;
	float LC;
	float TL;
};
struct NV *a;
void docfile(int *n , struct NV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(NV*)malloc((*n)*sizeof(NV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n %[^\n]\n %d\n %f\n",(*a)[i].M,(*a)[i].HT,&(*a)[i].T,(*a)[i].Q,&(*a)[i].DS,&(*a)[i].LC);
	}
}
void in (int n , struct NV *a){
		for (int i=0;i<n;i++){
				printf("\n %-5d %-10s %-20s %-15d %-15s %-10d %10.2f",i+1,a[i].M,a[i].HT,a[i].T,a[i].Q,a[i].DS,a[i].LC);
	}
}
void tongluong (int n , struct NV *a){
	float x;
	printf("\nNhap phan tram hoa hong: ");
	scanf("%f",&x);
	for (int i=0;i<n;i++){
		a[i].TL = a[i].LC + a[i].DS * (x/100);
	}
			for (int i=0;i<n;i++){
				printf("\n %-5d %-10s %-20s %-15d %-15s %-10d %10.2f %10.2f",i+1,a[i].M,a[i].HT,a[i].T,a[i].Q,a[i].DS,a[i].LC,a[i].TL);
	}
}
void inque (int n , struct NV *a){
	printf("\nDanh sach NV que HN va co danh so tren 10 la: ");
	int ok =0;
	for (int i=0;i<n;i++){
		if ((strcmpi(a[i].Q,"Ha Noi")==0)&&a[i].DS>10){
			printf("\n %-5d %-10s %-20s %-15d %-15s %-10d %10.2f %10.2f",i+1,a[i].M,a[i].HT,a[i].T,a[i].Q,a[i].DS,a[i].LC,a[i].TL);
			ok =1;
		}
	}
	if (ok ==0 ){
		printf("\nKhong co NV nao quen HN va co doanh so tren 10");
	}
}
void thuongthem (int n , struct NV *a){
	printf("\nNV duoc thuong them la: ");
	int max = a[0].DS;
	for (int i=1;i<n;i++){
		if (max<a[i].DS){
			max = a[i].DS;
		}
	}
	for (int i=0;i<n;i++){
		if (max==a[i].DS){
			a[i].LC=a[i].LC+200;
		}
	}
	tongluong(n,a);
}
int main(){
	int n;
	FILE *p1 = fopen("tho.txt","r") , *p2 = fopen("output.txt","w");
	if (p1 == NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	tongluong(n,a);
	inque(n,a);
	thuongthem(n,a);
	int fcloseall(void);
	free(a);
}

