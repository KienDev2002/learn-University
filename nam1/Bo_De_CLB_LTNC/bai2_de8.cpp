#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TV{
	char T[100];
	char TTG[100];
	int NXB;
};
struct TV *a;
void docfile(int *n , struct TV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TV*)malloc((*n)*sizeof(TV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n",(*a)[i].T,(*a)[i].TTG,&(*a)[i].NXB);
	}
}
void tim (int n , struct TV *a){
	char *b;
	if ((b=(char*)malloc(30*sizeof(char)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	printf("\nNhap ten sach can ktra la:");
	gets(b);
	int ok = 0;
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].T,b)==0){
			ok = 1;
			printf("\n %-5d %-20s %-20s %-5d",i+1,a[i].T,a[i].TTG,a[i].NXB);
		}
	}
	if (ok==0){
		printf("\nKhong co quyen sach nao ten la: %s",b);
	}		
}
void sapxep (int n , struct TV *a){
	printf("\nDanh sach cac sach sap xep theo truoc nam 2000");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].NXB<2000&&a[j].NXB<2000){
				if ( a[i].NXB>a[j].NXB){
					TV stemp = a[i];
					a[i]=a[j];
					a[j]=stemp;
				}
			}
		}
	}
	for (int i=0;i<n;i++){
		if (a[i].NXB<2000){
				printf("\n %-5d %-20s %-20s %-5d",i+1,a[i].T,a[i].TTG,a[i].NXB);
		}
	}
}
int main(){
	int n;
	FILE *p1 = fopen("sv.txt","r") , *p2 = fopen("output.txt","w");
	if (p1 == NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	tim(n,a);
	sapxep(n,a);
	int fcloseall(void);
	free(a);
}

