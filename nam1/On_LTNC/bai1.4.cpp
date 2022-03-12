#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float cd;
	float cr;
};
struct TD *a;
void docfile(int *n , FILE *p1, struct TD **a){
	fscanf(p1,"%d",&(*n));
	if ((*a = (TD*)malloc((*n+1)*sizeof(TD)))==NULL){
		printf("\nKhong du bo nho!");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"\n%f%f",&(*a)[i].cd,&(*a)[i].cr);
	}
}
void xuat (int n , struct TD *a , FILE *p2){
	printf("Co %d HCN: \n",n);
	fprintf(p2,"- Co %d HCN: \n",n);
	for (int i=0;i<n;i++){
		printf("chieu dai hinh %d la: %.2f\n",i+1,a[i].cd);
		printf("chieu rong hinh %d la: %.2f\n",i+1,a[i].cr);
		fprintf(p2,"chieu dai hinh %d la: %.2f\n",i+1,a[i].cd);
		fprintf(p2,"chieu rong hinh %d la: %.2f\n",i+1,a[i].cr);
	}
}
float tinh (int n , struct TD *a , FILE *p2){
	int dem=0;
	float S=0;;
	for (int i=0;i<n;i++){
		S+=(a[i].cd*a[i].cr);
		dem++;
	}
	return S/dem;
}
void timdodai (int n , struct TD *a , FILE *p2){
	printf("\n");
	fprintf(p2,"\n");
	float max= a[0].cd * a[0].cr;
	for (int i=1;i<n;i++){
		if (max< (a[i].cd*a[i].cr) ){
			max= a[i].cd*a[i].cr;
		}
	}
	for (int i=0;i<n;i++){
		if (max== a[i].cd*a[i].cr){
			printf("chieu dai hinh  la: %.2f\n",a[i].cd);
		printf("chieu rong hinh  la: %.2f\n",a[i].cr);
		}
	}
}
int main(){
	int n;
	FILE *p1= fopen("inHCN.txt","r"), *p2=fopen("outHCN.txt","w");
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	docfile(&n,p1,&a);
	xuat(n,a,p2);
	printf("\nDien tich Tb cua HCN la: %.2f",tinh(n,a,p2));
	timdodai(n,a,p2);
	fclose(p1);
	fclose(p2);
}

