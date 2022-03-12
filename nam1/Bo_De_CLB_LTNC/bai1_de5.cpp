#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n , int *m , int ***a , FILE *p1){
	fscanf(p1,"%d%d\n",m,n);
	if (((*a) = (int**)malloc((*m)*sizeof(int*)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*m;i++){
		if (((*a)[i] = (int*)malloc((*n)*sizeof(int)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%d\n",&(*a)[i][j]);
		}
	}
}
void in (int n , int m , int **a){
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
void TBC (int n , int m , int **a){
	float S=0;
	int dem =0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]%2==0 && a[i][j]%3==1){
				S+=a[i][j];
				dem++;
			}
		}
	}
	if (dem ==0){
		printf("\n Khong co ptu nao tm");
	}else {
		printf("\nTbc = %.2f",S/dem);
	}
}
void tonghang (int n , int m , int **a){
	int *b;
	if (((b) = (int*)malloc((m)*sizeof(int)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	int dem =0;
	b[dem] = {};
	for (int i=0;i<m;i++){
		b[dem]=0;
		for (int j=0;j<n;j++){
			b[dem]+=a[i][j];
		}
		dem++;
	}
	for (int i=0;i<dem;i++){
		printf("\nTong hang thu %d la: %d",i+1,b[i]);
	}
}
int main(){
	int m,n;
	int **a;
	FILE *p1 = fopen("matran.txt","r"),  *p2 = fopen ("outmt.txt","w");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&m,&a,p1);
	in(n,m,a);
	TBC(n,m,a);
	tonghang(n,m,a);
	int fcloseall(void);
	free(a);
}

