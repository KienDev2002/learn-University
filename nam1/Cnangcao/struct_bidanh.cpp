//Cap phat struct bang bi danh
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
void nhap(int &n, Diem *&a){
	printf("Nhap so phan tu: ");
	scanf("%d",&n);
	//scanf("%d",n)	
	//Cap phat n+5 phan tu
	a = (Diem*)calloc(n+5, sizeof(Diem));
	//Nhap
	for(int i=1; i<=n; i++){
		printf("Nhap diem thu %d: ",i);
		scanf("%lf%lf",&a[i].x, &a[i].y);
	}
}
void xuat(int n, Diem *a){
	//(x, y)
	printf("\nDay diem vua nhap:");
	for(int i=1;i<=n;i++){
		printf("\n(%.2lf, %.2lf)",a[i].x, a[i].y);
	}
}
int main(){
	int n;	//so phan tu
	Diem *a;	//*a la con tro dai dien cho mang mot chieu Diem
	nhap(n,a);
	xuat(n,a);
}

