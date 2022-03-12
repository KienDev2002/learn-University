//Con tro cap phat struct
 
#include"stdio.h"
#include"math.h"
#include"string.h"
#include"stdlib.h"
struct Diem{
	//Thuoc tinh
	double x;
	double y;
 
	//Phuong thuc
};
/*
	De bai: viet ham thuc hien cac cong viec
	+ Nhap mot day diem
	+ Xuat mot day diem
*/
 
void nhap(int *n, Diem **a){
	printf("Nhap so phan tu: ");
	scanf("%d",&(*n));
	//scanf("%d",n)	
	//Cap phat n+5 phan tu
	(*a) = (Diem*)calloc((*n)+5, sizeof(Diem));
	//Nhap
	for(int i=1; i<=(*n); i++){
		printf("Nhap diem thu %d: ",i);
		scanf("%lf%lf",&(*a)[i].x, &(*a)[i].y);
		//cu phap: (*a)[i].x <=> a[i]->x
		//cach 2: scanf("%lf%lf",&(a[i]->x), &(a[i]->y));
	}
}
void nhapb(int *n, Diem **b){
	printf("Nhap so phan tu: ");
	scanf("%d",&(*n));
	(*b) = (Diem*)calloc((*n)+5, sizeof(Diem));
	//Nhap
	for(int i=1; i<=(*n); i++){
		printf("Nhap diem thu %d: ",i);
		scanf("%lf%lf",&(*b)[i].x, &(*b)[i].y);
	}
}

void xuat(int n, Diem *a , Diem *b){
	//(x, y)
	printf("\nDay diem vua nhap:");
	for(int i=1;i<=n;i++){
		printf("\n(%.2lf, %.2lf)",a[i].x, a[i].y);
	}
		for(int i=1;i<=n;i++){
		printf("\n(%.2lf, %.2lf)",b[i].x, b[i].y);
	}
}
int main(){
	int n;	//so phan tu
	Diem *a;
	Diem *b;	//*a la con tro dai dien cho mang mot chieu Diem
	nhap(&n,&a);
	nhapb(&n,&b);
	xuat(n,a,b);
}

