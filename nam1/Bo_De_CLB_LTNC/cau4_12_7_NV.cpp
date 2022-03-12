#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	char M[100];
	char HT[100];
	int ST;
	float DN,PN;
};
struct SV *a;
void docfile(int *n , struct SV **a , FILE *p1, int *x){
	fscanf(p1,"%d%d\n",n,x);
	if (((*a)=(SV*)malloc((*n)*sizeof(SV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n %f\n",(*a)[i].M,(*a)[i].HT,&(*a)[i].ST,&(*a)[i].DN);
	}
}
void in (int n , struct SV *a){
		for (int i=0;i<n;i++){
				printf("\n %-5d %-10s %-20s %-10d %-10.0f",i+1,a[i].M,a[i].HT,a[i].ST,a[i].DN);
	}
}
void hocphiphainop (int n , struct SV *a, int x){
	printf("\nDanh sach sinh vien bao gom ca hoc phi phai nop la: ");
	for (int i=0;i<n;i++){
		a[i].PN = a[i].ST * x;
	}
			for (int i=0;i<n;i++){
			printf("\n %-5d %-10s %-20s %-10d %-10.0f %10.0f",i+1,a[i].M,a[i].HT,a[i].ST,a[i].DN,a[i].PN);
	}
}
void dkinhieu(int n , struct SV *a , int x){
	printf("\nSinh Vien Dki nhieu tin nhat la: ");
	float max = a[0].ST;
	for (int i=1;i<n;i++){
		if (max<a[i].ST){
			max = a[i].ST;
		}
	}
	for (int i=0;i<n;i++){
		if (max==a[i].ST){
				printf("\n %-5d %-10s %-20s %-10d %-10.0f %10.0f",i+1,a[i].M,a[i].HT,a[i].ST,a[i].DN,a[i].PN);	
		}
	}
}
void camthi (int n , struct SV *a , int x){
	printf("\nSinh vien bi cam thi la: ");
	for (int i=0;i<n;i++){
		if (a[i].PN-a[i].DN>0){
				printf("\n %-5d %-10s %-20s %-10d %-10.0f %10.0f",i+1,a[i].M,a[i].HT,a[i].ST,a[i].DN,a[i].PN);	
		}
	}
}
int main(){
	int n,x;
	FILE *p1 = fopen("sv.txt","r") , *p2 = fopen("output.txt","w");
	if (p1 == NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1,&x);
	in(n,a);
	hocphiphainop(n,a,x);
	dkinhieu(n,a,x);
	camthi(n,a,x);
	int fcloseall(void);
	free(a);
}

