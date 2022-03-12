#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
struct DV{
	char HT[100];
	int NS;
	int NKN;
}; 
struct DV *a;
void docfile (int *n , struct DV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a) = (DV*)malloc((*n)*sizeof(DV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %d\n %d\n",(*a)[i].HT,&(*a)[i].NS,&(*a)[i].NKN);
	}
}
void in (int n , struct DV *a){
	for (int i=0;i<n;i++){
		printf("\n%-5d %-20s %10d %10d",i+1,a[i].HT,a[i].NS,a[i].NKN);
	}
}
void sapxep (int n , struct DV *a){
	printf("\nSap xep luong giam:");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].NKN>a[j].NKN){
				DV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	in (n,a);
}
void thongke (int n , struct DV *a){
	printf("\n Dang vien co tu  20 nam tuoi dang tro len la:");
	for (int i=0;i<n;i++){
		if (a[i].NKN>=20){
			printf("\n%-5d %-20s %10d %10d",i+1,a[i].HT,a[i].NS,a[i].NKN);		
		}
	}
}
int main(){
	int n;
	FILE *p1 = fopen("DV.txt","r");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	sapxep(n,a);
	thongke(n,a);
	int fcloseall(void);
	free(a);
}

