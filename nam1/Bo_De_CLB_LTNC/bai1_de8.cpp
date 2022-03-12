#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD{
	float x,y;
};
struct TD *a;
void docfile(int *n , struct TD **a , FILE *p1){
	fscanf(p1,"%d",n);
	if (((*a)=(TD*)malloc((*n)*sizeof(TD)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f%f\n",&(*a)[i].x,&(*a)[i].y);
	}
}
void ngoaitrong (int n , struct TD *a){
	int dem =0,d=0;
	for (int i=0;i<n;i++){
		if (sqrt(pow(a[i].x,2) + pow(a[i].y,2))<5){
			dem++;
		}else {
			d++;
		}
	}
	if (dem==0){
		printf("\nKhong co diem nao nam trong");
	}else{
	printf("\nCo %d diem nao nam trong",dem);	
	}
	if (d==0){
		printf("\nKhong co diem nao nam ngoai");
	}else{
	printf("\nCo %d diem nao nam ngoai",d);	
	}
}
void doantrong (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
						if (sqrt(pow(a[i].x,2) + pow(a[i].y,2))<5 && sqrt(pow(a[j].x,2) + pow(a[j].y,2))<5){
							dem++;
			}
		}
	}
	if (dem==0){
		printf("\nKhong co doan nao nam trong");
	}else{
	printf("\nCo %d doan thang nam trong duong trong tam O bk5",dem);
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
	ngoaitrong(n,a);
	doantrong(n,a);
	int fcloseall(void);
	free(a);
}

