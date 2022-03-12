#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x,y;
};
struct TD *a;
void docfile(int *n , struct TD **a , FILE *p1){
	fscanf(p1,"%d",n);
	if(((*a)=(TD*)malloc((*n)*sizeof(TD)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f%f\n",&(*a)[i].x,&(*a)[i].y);
	}
}
float tong (int n , struct TD *a){
	float S=0;
	for (int i=0;i<n;i++){
		S+=fabs(a[i].y);
	}
	return S;
}
void doanmax (int n , struct TD *a){
	float max = sqrt (pow (a[n-1].x-a[0].x,2) + pow (a[n-1].y-a[0].y,2));
	for (int i=1;i<n;i++){
		if (max<sqrt (pow (a[i].x-a[i-1].x,2) + pow (a[i].y-a[i-1].y,2))){
			max = sqrt (pow (a[i].x-a[i-1].x,2) + pow (a[i].y-a[i-1].y,2));
		}
	}
	for (int i=1;i<n;i++){
		if (max==sqrt (pow (a[i].x-a[i-1].x,2) + pow (a[i].y-a[i-1].y,2))){
			printf("\n Doan thang lon nhat co 2 dau mut la: (%.2f , %.2f) , (%.2f , %.2f)",a[i-1].x,a[i-1].y,a[i].x,a[i].y);
		}
	}
	if (max==sqrt (pow (a[n-1].x-a[0].x,2) + pow (a[n-1].y-a[0].y,2))){
			printf("\n Doan thang lon nhat co 2 dau mut la: (%.2f , %.2f) , (%.2f , %.2f)",a[0].x,a[0].y,a[n-1].x,a[n-1].y);
	}
}
int main(){
	int n;
	FILE *p1 = fopen("toado.txt","r") , *p2 = fopen ("out.txt","w");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	printf("\nTong cac diem den truc hoanh la: %.2f",tong(n,a));
	doanmax(n,a);
	int fcloseall(void);
	free(a);
}

