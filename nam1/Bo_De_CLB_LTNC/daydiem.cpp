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
void tinh (int n , struct TD *a){
	float dodai =0;
	for (int i=1;i<n;i++){
		dodai =dodai + (sqrt (pow(a[i].x - a[i-1].x,2) + pow (a[i].y-a[i-1].y,2))); 
	}
	dodai=dodai+ (sqrt (pow(a[n-1].x - a[0].x,2) + pow (a[n-1].y-a[0].y,2)));
	printf("\n Do dai: %.2f",dodai);
}
void tinhlon (int n , struct TD *a){
	float dodai =0;
	for (int i=1;i<n;i++){
		if (a[i].y>=0&&a[i-1].y>=0){
					dodai =dodai + (sqrt (pow(a[i].x - a[i-1].x,2) + pow (a[i].y-a[i-1].y,2))); 
			}
		}
		if (a[n-1].y>=0 && a[0].y>=0){
			dodai=dodai+ (sqrt (pow(a[n-1].x - a[0].x,2) + pow (a[n-1].y-a[0].y,2)));	
		}
	printf("\n Do dai ddt khi y>=0 la: %.2f",dodai);
}
float tinhchan (int n , struct TD *a){
	float dodai1 =0;
	for (int i=2;i<n;i++){
		if (i%2==0&&(i-2)%2==0){
				dodai1 =dodai1 + (sqrt (pow(a[i-2].x - a[i].x,2) + pow (a[i-2].y-a[i].y,2))); 
			}
		}
		if ((n-1)%2==0){
			dodai1=dodai1+ (sqrt (pow(a[n-1].x - a[0].x,2) + pow (a[n-1].y-a[0].y,2)));	
		}
	return dodai1;
}
float tinhle (int n , struct TD *a){
	float dodai =0;
	for (int i=3;i<n;i++){
		if (i%2==1&&(i-2)%2==1){
					dodai =dodai + (sqrt (pow(a[i-2].x - a[i].x,2) + pow (a[i-2].y-a[i].y,2))); 
			}
		}
		return dodai;
}
float sosanh (int n , struct TD *a){
	float max = tinhle(n,a)>tinhchan(n,a)?tinhle(n,a):tinhchan(n,a);
	return max;
}
void dem (int n , struct TD *a){
	int dem=0;
	for (int i=0 ;i<n;i++){
		if (sqrt(pow(a[i].x-2,2)+pow(a[i].y-3,2))<=4){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao");
	}else{
		printf("\n Co %d diem trong",dem);
	}
	dem=0;
	for (int i=0 ;i<n;i++){
		if (sqrt(pow(a[i].x-2,2)+pow(a[i].y-3,2))>4){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao ngoai");
	}else{
		printf("\n Co %d diem ngoai",dem);
	}
}
void gan (int n , struct TD *a){
	float min = sqrt (pow(a[0].x,2) + pow(a[0].y,2));
	float max = sqrt (pow(a[0].x,2) + pow(a[0].y,2));
	for (int i=0;i<n;i++){
		if (min > sqrt (pow(a[i].x,2) + pow(a[i].y,2))){
			min = sqrt (pow(a[i].x,2) + pow(a[i].y,2)); 
		}
	}
	for (int i=0;i<n;i++){
		if (min == sqrt (pow(a[i].x,2) + pow(a[i].y,2))){
			 	printf("\n( %.2f , %.2f ) ",a[i].x,a[i].y);
		}
	}
	for (int i=0;i<n;i++){
		if (max < sqrt (pow(a[i].x,2) + pow(a[i].y,2))){
			max = sqrt (pow(a[i].x,2) + pow(a[i].y,2)); 
		}
	}
	for (int i=0;i<n;i++){
		if (max == sqrt (pow(a[i].x,2) + pow(a[i].y,2))){
			 	printf("\n( %.2f , %.2f ) ",a[i].x,a[i].y);
		}
	}
}
void gocthunhat (int n , struct TD *a){
	int dem=0;
	for (int i=0;i<n;i++){
		if (a[i].x>0 && a[i].y>0){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao foc ptu thu 1");
	}else{
		printf("\n Co %d diem goc ptu thu nhat",dem);
	}
	dem =0;
	for (int i=0;i<n;i++){
		if (a[i].x<0 && a[i].y>0){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao foc ptu thu 2");
	}else{
		printf("\n Co %d diem goc ptu thu hai",dem);
	}
	dem =0;
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
	dem =0 ;
		for (int i=0;i<n;i++){
		if (a[i].x>0 && a[i].y<0){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co diem nao foc ptu thu 4");
	}else{
		printf("\n Co %d diem goc ptu thu bon",dem);
	}
}
void doanthang (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n;i++){
		if (a[i].x>0 && a[i].y>0 ){
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co doan thang nao foc ptu thu 1");
	}else{
		printf("\n Co %d doan thang goc ptu thu nhat",dem/2);
	}
} 
void dientichmin (int n , struct TD *a){
	float max=sqrt (pow(a[0].x,2) + pow(a[0].y,2));
	for (int i=1;i<n;i++){
		if (max <  sqrt (pow(a[i].x,2) + pow(a[i].y,2))){
			max = sqrt (pow(a[i].x,2) + pow(a[i].y,2));
		}
	}
			 	printf("\nDien tich hinh tron nho nhat la: %.2f",max*max*M_PI);
}
void cat (int n , struct TD *a){
	int dem =0;
	for (int i=0;i<n;i++){
		if (a[i].x);
	}
}
void sapxep (int n , struct TD *a, FILE *p2){
	printf("\n Sap xep tang dan hoanh do\n");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].x>a[j].x){
				TD stemp = a[i];
				a[i] = a[j];
				a[j] = stemp;
			}
		}
	}
	in (n,a,p2);
	printf("\n Sap xep tang dan tung do\n");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].y>a[j].y){
				TD stemp = a[i];
				a[i] = a[j];
				a[j] = stemp;
			}
		}
	}
	in (n,a,p2);
}
void tamgiac (int n , struct TD *a){
	for (int i=0;i<n;i++){
		
	}
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
	tinh(n,a);
	tinhlon(n,a);
	printf("\n Do dai cac diem chan la: %.2f ",tinhchan(n,a));
	printf("\n Do dai cac diem le la: %.2f ",tinhle(n,a));
	if (sosanh(n,a)==tinhle(n,a)){
		printf("\nDo dai duong gap khuc le lon hon chan");
	}else if (sosanh(n,a)==tinhchan(n,a)){
		printf("\nDo dai duong gap khuc chan lon hon le");
	}
	dem(n,a);
	gan(n,a);
	gocthunhat(n,a);
	doanthang(n,a);
	dientichmin(n,a);
	sapxep(n,a,p2);
	int fcloseall (void);
	free(a);
}

