#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TV{
	char M[100];
	char T[100];
	char TTG[100];
	int NXB;
	float GT;
};
struct TV *a;
void docfile(int *n , struct TV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TV*)malloc((*n)*sizeof(TV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %[^\n]\n %d\n %f\n",(*a)[i].M,(*a)[i].T,(*a)[i].TTG,&(*a)[i].NXB,&(*a)[i].GT);
	}
}
void tim (int n , struct TV *a){
	char *b;
	float x;
	if ((b=(char*)malloc(30*sizeof(char)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	printf("\nNhap ten sach can ktra la:");
	gets(b);
	printf("\nNhap gia sach can ktra");
	scanf("%f",&x);
	int ok = 0;
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].T,b)==0&&a[i].GT==x){
			ok = 1;
			printf("\n %-5d %-20s %-20s %-20s %-5d %-10.2f",i+1,a[i].M,a[i].T,a[i].TTG,a[i].NXB,a[i].GT);
		}
	}
	if (ok==0){
		printf("\nKhong co quyen sach nao ten la: %s va co gia la %.2f",b,x);
	}		
}
void sapxep (int n , struct TV *a){
	printf("\nDanh sach sap xep tang dan theo gia");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
				if ( a[i].GT>a[j].GT){
					TV stemp = a[i];
					a[i]=a[j];
					a[j]=stemp;
			}
		}
	}
	for (int i=0;i<n;i++){
				printf("\n %-5d %-20s %-20s %-20s %-5d %10.2f",i+1,a[i].M,a[i].T,a[i].TTG,a[i].NXB,a[i].GT);
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

