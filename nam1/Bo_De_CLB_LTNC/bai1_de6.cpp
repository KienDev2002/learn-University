#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n , int ***a ,int *m, FILE *p1){
	fscanf(p1,"%d%d\n",m,n);
	if (((*a)=(int**)malloc((*m)*sizeof(int*)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*m;i++){
		if (((*a)[i]=(int*)malloc((*n)*sizeof(int)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}	
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%d",&(*a)[i][j]);
		}
	}
}
int duoidcp (int n , int m, int **a){
	int S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (i+j>=n){
				S+=a[i][j];
			}
		}
	}
	return S;
}
int ktra (int n , int m , int **a){
	if (m!=n){
		return 0;
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if ((i==j&&a[i][j]==0)||(i>j&&a[i][j]==0)||(i<j&&a[i][j]!=0)){
				return 0;
			}
		}
	}
}
	return 1;
}
void ktrathua (int n , int m , int **a){
	int dem =0;
	int ok=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]==0){
				dem++;
			}
		}
	}
	if (dem ==0){
		printf("\nKhong la mtran thua");
	}else {
		for (int i=0;i<m;i++){
			for (int j=0;j<n;j++){
				if (((float)(100/(m*n))*dem)>=60){
					ok=1;
				}
			}
		}
		if (ok==0){
				printf("\nKhong la mtran thua");
		}else{
				printf("\nla mtran thua");
		}
	}
}
int main(){
	int m,n,**a;
	FILE *p1 = fopen("matran.txt","r");
	if (p1==NULL){
		printf("\nChua co file");
	}
	docfile(&n,&a,&m,p1);
	printf("\nTong duoi dcp: %d",duoidcp(n,m,a));
	if (ktra(n,m,a)==0){
		printf("\nKhong la ma tran tam giac tren");
	}else{
			printf("\nla ma tran tam giac tren");
	}
	ktrathua(n,m,a);
	int fcloseall(void);
	for (int i=0;i<m;i++){
		free(a[i]);
	}
	free(a);
}

