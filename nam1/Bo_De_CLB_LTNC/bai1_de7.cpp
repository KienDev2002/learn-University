#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x,y;
};
struct TD *a;
void docfile (int *n , struct TD **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TD*)malloc((*n)*sizeof(TD)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f %f\n",&(*a)[i].x, &(*a)[i].y);
	}
}
void cachxa (int n , struct TD *a){
	float max = sqrt(pow(a[0].x,2) + pow(a[0].y,2));
	for (int i=1;i<n;i++){
		if (max<sqrt(pow(a[i].x,2) + pow(a[i].y,2))){
			max = sqrt(pow(a[i].x,2) + pow(a[i].y,2));
		}
	}
	for (int i=0;i<n;i++){
		if (max==sqrt(pow(a[i].x,2) + pow(a[i].y,2))){
			printf("\n(%.2f , %.2f)",a[i].x,a[i].y);
		}
	}
}
void dodaidgk (int n , struct TD *a){
	float dodai =0;
	for (int i=1;i<n;i++){
		dodai+=sqrt(pow(a[i].x-a[i-1].x,2) + pow(a[i].y-a[i-1].y,2));
	}
	dodai+=sqrt(pow(a[n-1].x-a[0].x,2) + pow(a[n-1].y-a[0].y,2));
	printf("\nDo dai dgk la: %.2f",dodai);
}
int main(){
	int n;
	FILE *p1 = fopen("toado.txt","r") , *p2= fopen ("outtd.txt","w");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	cachxa(n,a);
	dodaidgk(n,a);
	int fcloseall(void);
	free(a);
}

