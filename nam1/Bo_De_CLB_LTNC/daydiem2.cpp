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
		fprintf(p2,"( %.2f , %.2f ) ",a[i].x,a[i].y);
		printf("( %.2f , %.2f ) ",a[i].x,a[i].y);
	}
}
void demso(int n , struct TD *a){
	int	dem =0;
	for (int i=0;i<n;i++){
		if (a[i].x<0 && a[i].y<0){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao foc ptu thu 3");
	}else{
		printf("\n Co %d diem goc ptu thu ba",dem);
	}
	dem =0;
	for (int i=0;i<n;i++){
		if (a[i].x<0 && a[i].y<0){
			dem++;
		}
	}
	if (dem==0 || dem==1){
		printf("\n Khong co doan thang nao thuoc ptu thu 3");
	}else{
		printf("\n Co %d doan thang ptu thu ba",dem/2);
	}
}
void dem (int n , struct TD *a){
	int R;
	printf("\n Nhap ban kinh:");
	scanf("%d",&R);
	int dem=0;
	for (int i=0 ;i<n;i++){
		if (sqrt(pow(a[i].x-2,2)+pow(a[i].y-3,2))>R){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao ngoai");
	}else{
		printf("\n Co %d diem ngoai",dem);
	}
}
// chu vi da giac la tong cac canh
float tinh (int n , struct TD *a ){
	float dodai =0;
	for (int i=1;i<n;i++){
		dodai+= sqrt(pow (a[i].x-a[i-1].x,2) + pow (a[i].y-a[i-1].y,2));
	}
	dodai+=sqrt(pow (a[n-1].x-a[0].x,2) + pow (a[n-1].y-a[0].y,2));
	return dodai;
}
float tinhle (int n , struct TD *a){
	float dodai =0;
	for (int i=2;i<n;i++){
		dodai +=  sqrt(pow (a[i].x-a[i-2].x,2) + pow (a[i].y-a[i-2].y,2));
		i++;
	}
	return dodai;
}
void cat (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
		if ((a[i].x>0&& a[i].y>0 && a[j].x<0)|| (a[i].x<0 && a[i].y>0 && a[j].x>0)||(a[i].x<0 && a[i].y<0&& a[j].x>0)||(a[i].x>0 && a[i].y<0&&a[j].x<0) ){
			dem++;
		}
	}
}
	if (dem==0){
		printf("\n Khong co doan thang nao cat truc tung");
	}else{
		printf("\n Co %d doan thang cat tung",dem);
	}
	dem =0;
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
		if ((a[i].x>0&& a[i].y>0 && a[j].y<0)|| (a[i].x<0 && a[i].y>0 && a[j].y<0)||(a[i].x<0 && a[i].y<0&& a[j].y>0)||(a[i].x>0 && a[i].y<0&&a[j].y>0) ){
			dem++;
		}
	}
}
	if (dem==0){
		printf("\n Khong co doan thang nao cat truc hoanh");
	}else{
		printf("\n Co %d doan thang cat hoanh",dem);
	}
}
void dientich (int n , struct TD *a){
	float max =  sqrt(pow (a[0].x,2) + pow (a[0].y,2));
	for (int i=1;i<n;i++){
		if (max<sqrt(pow (a[i].x,2) + pow (a[i].y,2))){
			max= sqrt(pow (a[i].x,2) + pow (a[i].y,2));
		}
	}
		printf("\nDien tich: %.2f",max*max*M_PI);
}
void dientichmax (int n , struct TD *a){
	float *dodai;
	printf("\n");
	if (((dodai)=(float*)malloc((n+1)*sizeof(float)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	int dem =0;
	dodai[0]=sqrt(pow (a[n-1].x-a[0].x,2) + pow (a[n-1].y-a[0].y,2));
	for (int i=1;i<n;i++){
		dem++;
		dodai[dem]= sqrt(pow (a[i].x-a[i-1].x,2) + pow (a[i].y-a[i-1].y,2));
	}
	for (int i=0;i<dem;i++){
		for (int j=i+1;j<=dem;j++){
			if (dodai[i]<dodai[j]){
				float stemp = dodai[i];
				dodai[i]=dodai[j];
				dodai[j]=stemp;
			}
		}
	}
	for (int i=0;i<3;i++){
			printf("\n %.2f",dodai[i]);
	}
}
void dientichHC (int n , struct TD *a){
	float max =  sqrt(pow (a[1].x-a[0].x,2) + pow (a[1].y-a[0].y,2));
	for (int i=2;i<n;i++){
		if (max<sqrt(pow (a[i].x-a[0].x,2) + pow (a[i].y-a[0].y,2))){
			max= sqrt(pow (a[i].x-a[0].x,2) + pow (a[i].y-a[0].y,2));
		}
	}
		printf("\nDien tich duong tron tam la toa do diem thu 1: %.2f",max*max*M_PI);
}
int main(){
	int n;
	FILE *p1 = fopen("bai1_cautruc.txt","r") , *p2= fopen("outday.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	demso(n,a);
	dem(n,a);
	printf("\n Do dai: %.2f",tinh(n,a));
	printf("\n Do dai diem le: %.2f",tinhle(n,a));
	cat(n,a);
	dientich(n,a);
	dientichmax(n,a);
	dientichHC(n,a);
	int fcloseall (void);
	free(a);
}

