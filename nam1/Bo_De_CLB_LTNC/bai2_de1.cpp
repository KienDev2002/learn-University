#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct MH {
	char T[12];
	float G;
	int SL;
};
struct MH *a;
void docfile (int *n , struct MH **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(MH*)malloc((*n)*sizeof(MH)))==NULL){
		printf("\nchua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
			fscanf(p1,"%[^\n]\n",(*a)[i].T);
			fscanf(p1,"%f\n",&(*a)[i].G);
			fscanf(p1,"%d\n",&(*a)[i].SL);
	}
}
void in (int n , struct MH *a){
	for (int i=0;i<n;i++){
		printf(" \n%-20s %10.2f %10d",a[i].T,a[i].G,a[i].SL);
	}
}
void tinh (int n , struct MH *a){
	int dem = 0,d=0,i=0;
	float tien;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmpi(a[i].T,a[j].T)>0){
					MH stemp = a[i];
					a[i]=a[j];
					a[j] = stemp;
			}
		}
	}
	while (i<n){
		dem=0;
		tien=0;
		for (int j=i;j<n;j++){
			if (strcmpi(a[i].T,a[j].T)==0){
				tien+=a[j].G;
				dem++;
			}
		}
		printf("\n Tien cua mat hang %s la: %.2f",a[i].T,tien);
		i+=dem;
	}
	float S=0;
	for (int i=0;i<n;i++){
		S+=a[i].G;
	}
	printf("\n Tong tien cua hang la: %.2f",S);
}
void sapxep (int n , struct MH *a){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].SL<a[j].SL){
					MH stemp = a[i];
					a[i]=a[j];
					a[j] = stemp;
			}else if (a[i].SL == a[j].SL && a[i].G<a[j].G){
					MH stemp = a[i];
					a[i]=a[j];
					a[j] = stemp;
			}
		}
	}
	in(n,a);
}
void xuat (int n , struct MH *a){
	int dem =0;
	printf("\nMat hangco gia tien lon hon 10000");
	for (int i=0;i<n;i++){
		if (a[i].G>10000){
			dem++;
			printf("\n%-20s %10.2f %10d",a[i].T,a[i].G,a[i].SL);
		}
	}
	if (dem ==0){
		printf("\n Khong co mat hang nao co gia tien lon hon 10000");
	}
}
int main(){
	int n;
	FILE *p1 = fopen("MH.txt","r");
	FILE *p2 = fopen("outMH.txt","w");
	if (p1==NULL){
		printf("\n Chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	tinh(n,a);
	sapxep(n,a);
	xuat(n,a);
	int ffcloseall (void);
	free(a);
}

