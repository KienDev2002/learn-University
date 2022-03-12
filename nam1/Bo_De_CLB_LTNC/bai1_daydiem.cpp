#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x;
	float y;
};
struct TD *a;
void docfile(int *n , struct  TD **a , FILE *p1 ){
	fscanf(p1,"%d",n);
		if (((*a)=(TD*)malloc((*n)*sizeof(TD)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f\n",&(*a)[i].x);
		fscanf(p1,"%f\n",&(*a)[i].y);
	}
}
void in (int n , struct TD *a , FILE *p2){
		for (int i=0;i<n;i++){
		fprintf(p2,"\n( %.2f , %.2f ) ",a[i].x,a[i].y);
		printf("\n( %.2f , %.2f ) ",a[i].x,a[i].y);
	}
}
void thuhai (int n , struct  TD *a){
	int dem =0;
	printf("\n cac diem thuoc goc ptu thu hai la:");
	for (int i=0;i<n;i++){
		if (a[i].x<0 && a[i].y>0){
			dem++;
		printf("\n( %.2f , %.2f ) ",a[i].x,a[i].y);
		}
	}
	if (dem==0){
		printf("\nkhong co diem nao");
	}
}
void cattung (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].x*a[j].x<=0){
				dem++;
			}
		}
	}
	printf("\n Co %d diem cat truc tung",dem);
}
int main(){
	int n;
	FILE *p1 = fopen("bai1_cautruc.txt","r") , *p2= fopen("bai1_1.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	thuhai(n,a);
	cattung(n,a);
	int fcloseall (void);
	free(a);
}

