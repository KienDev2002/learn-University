#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TH {
	char T[12];
	int HSD;
	char CD;
	int SL;
};
struct TH *a;
void docfile (int *n , struct TH **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if(((*a) = (TH*)malloc((*n)*sizeof(TH)))==NULL){
		printf("\n chua co bo nho ");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n",(*a)[i].T);
		fscanf(p1,"%d\n",&(*a)[i].HSD);
		fscanf(p1,"%c\n",&(*a)[i].CD);
		fscanf(p1,"%d\n",&(*a)[i].SL);
	}
}
void in (int n , struct TH *a){
	for (int i=0;i<n;i++){
		printf(" \n%-20s %-10d %-10c %-10d",a[i].T,a[i].HSD,a[i].CD,a[i].SL);
	}
}
void hethan (int n , struct TH *a){
	printf("\n Danh sach thuoc het han la: ");
	for (int i=0;i<n;i++){
		if (a[i].HSD<=0){
				printf(" \n%-20s %-10d %-10c %-10d",a[i].T,a[i].HSD,a[i].CD,a[i].SL);
		}
	}
}
void tong (int n , struct TH *a){
	int S=0,S1=0,S2=0;
	for (int i=0;i<n;i++){
		if (a[i].CD=='A'){
	    	S+=a[i].SL;	
		} else if (a[i].CD=='B'){
			S1+=a[i].SL;
		} 
		else S2+=a[i].SL;
	}
	printf("\n Tong so luong thuoc co cong dung la A la: %d",S);
	printf("\n Tong so luong thuoc co cong dung la B la: %d",S1);
	printf("\n Tong so luong thuoc co cong dung la C la: %d",S2);
}
void sapxep (int n , struct TH *a){
	printf("\n Sap xep theo ten thuoc la:");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmpi(a[i].T,a[j].T)>0){
					TH stemp = a[i];
					a[i]=a[j];
					a[j] = stemp;
			}
		}
	}
	in(n,a);
}
int main(){
	int n;
	FILE *p1 = fopen("thuoc.txt","r");
	FILE *p2 = fopen("outT.txt","w");
	if (p1==NULL){
		printf("\n Chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	hethan(n,a);
	tong(n,a);
	sapxep(n,a);
	int ffcloseall (void);
	free(a);
}

