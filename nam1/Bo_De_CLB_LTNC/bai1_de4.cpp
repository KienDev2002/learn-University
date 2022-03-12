#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x,y;
};
struct TD *a;
void docfile (int *n , struct TD **a, FILE *p1){
	fscanf(p1,"%d",n);
	if (((*a) = (TD*)malloc((*n)*sizeof(TD)))==NULL){
		printf("]n chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f%f\n",&(*a)[i].x,&(*a)[i].y);
	}
}
void xagoc (int n, struct TD *a){
	float max = sqrt (pow(a[0].x,2)+pow(a[0].y,2));
	for (int i=1;i<n;i++){
		if (max<sqrt (pow(a[i].x,2)+pow(a[i].y,2))){
			max = sqrt (pow(a[i].x,2)+pow(a[i].y,2));
		}
	}
	for (int i=0;i<n;i++){
		if (max==sqrt (pow(a[i].x,2)+pow(a[i].y,2))){
			printf("\n(%.2f , %.2f )\n",a[i].x,a[i].y);
		}
	}
}
void doanthuba (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].x<0&&a[j].x<0&&a[i].y<0&&a[j].y<0){
				dem++;
			}
		}
	}
	printf("\nSo doan thang nam trong goc thu ba la: %d",dem);
}
int main(){
	int n;
	FILE *p1 = fopen("toado.txt","r"), *p2 = fopen("outtoado.txt","w");
	if (p1==NULL){
		printf("\n chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	xagoc(n,a);
	doanthuba(n,a);
	int fcloseall(void);
	free(a);
}

