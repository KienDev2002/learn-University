#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct NV {
	char MNV[12];
	char HT[12];
	char TD[12];
	int T;
	float TG,TL;
};
struct NV *a;
float LCB;
void docfile(int *n , struct NV **a, FILE *p1){
	fscanf(p1,"%d\n",n);
	fscanf(p1,"%f\n",&LCB);
	if (((*a)=(NV*)malloc((*n)*sizeof(NV)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n",(*a)[i].MNV);
		fscanf(p1,"%[^\n]\n",(*a)[i].HT);
		fscanf(p1,"%[^\n]\n",(*a)[i].TD);
		fscanf(p1,"%d\n",&(*a)[i].T);
		fscanf(p1,"%f\n",&(*a)[i].TG);
	}
}
void in(int n , struct NV *a, FILE *p2){
	for (int i=0;i<n;i++){
		fprintf(p2,"\n%-10s %-20s %-10s %-7d %-7.2f",a[i].MNV,a[i].HT,a[i].TD,a[i].T,a[i].TG);
		printf("\n%-10s %-20s %-10s %-7d %-7.2f ",a[i].MNV,a[i].HT,a[i].TD,a[i].T,a[i].TG);
	}
}
void tangca (int n , struct NV *a){
	float max = a[0].TG;
	for (int i=1;i<n;i++){
		if (max<a[i].TG){
			max = a[i].TG;
		}
	}
	printf("\nNV tang ca nhieu nhat la: ");
	for (int i=0;i<n;i++){
		if (max==a[i].TG){
		printf("\n%-10s %-20s %-10s %-7d %-7.2f",a[i].MNV,a[i].HT,a[i].TD,a[i].T,a[i].TG);
		}
	}
}
void tongluong (int n , struct NV *a){
	for (int i=0;i<n;i++){
		a[i].TL=0;
	}
	printf("\nTong luong va danh sach:");
	for (int i=0;i<n;i++){
		if (strcmpi (a[i].TD,"fresber")==0){
			a[i].TL += ((2*LCB) + (a[i].TG *20));
		}else if (strcmpi(a[i].TD,"senior")==0){
			a[i].TL += 4*LCB + a[i].TG *20;
		}else if (strcmpi(a[i].TD,"junior")==0){
			a[i].TL += 3*LCB + a[i].TG *20;
		}
	}
	for (int i=0;i<n;i++){
		printf("\n%-10s %-20s %-10s %-7d %-7.2f %7.2f",a[i].MNV,a[i].HT,a[i].TD,a[i].T,a[i].TG,a[i].TL);
	}	
}
void tim (int n , struct NV *a){
	char *c = (char*)malloc(30*sizeof(char));
	char *d = (char*)malloc(30*sizeof(char));
	int dem=0;
	printf("\nNhap x:");
	gets(c);
	printf("\nNhap trinh do de thay doi:");
	gets(d);
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].HT,c)==0){
			dem++;
			printf("\n%-10s %-20s %-10s %-7d %-7.2f %7.2f",a[i].MNV,a[i].HT,d,a[i].T,a[i].TG,a[i].TL);
		}
	}
	if (dem==0){
		printf("\n Khong co nhan vien x");
	}
}
int main(){
	int n;
	    char *c;
    if ((c=(char*)malloc(30*sizeof(char)))==NULL){
    	printf("chua co bo nho");
    	exit(0);
	}
	printf("\nNhap teen file can doc:");
	gets(c);
	FILE *p1 = fopen(c,"r") , *p2= fopen("dathu27_2.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	tangca(n,a);
	tongluong(n,a);
	tim(n,a);
	int fcloseall (void);
	free(a);
}
