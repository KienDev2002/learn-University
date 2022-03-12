#include<stdio.h>
#include<math.h>
#include<string.h>
struct HS {
	char HoTen[20];
	char NgaySinh[20];
	char HanhKiem[10];
	float DTB;
	long TienThuong;
};
void nhapDSHS (int n , struct HS a[100]);
void inDSHS (int n , struct HS a[100]);
void tinhtien (int n , struct HS a[100]);
int main(){
	int n;
	struct HS a[100];
	printf ("nhap n hoc sinh =");
	scanf ("%d",&n);
	nhapDSHS (n,a);
	inDSHS(n,a);
	tinhtien(n,a);
}
// phan 1
void nhapDSHS (int n , struct HS a[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("Ho ten hoc sinh thu %d la :",i);
		fflush (stdin);
		gets (a[i].HoTen);
		
		
		printf ("Ngay sinh cua hoc sinh thu %d la , nhap theo cau truc dd/mm/yyyy :",i);
		fflush(stdin);
		gets (a[i].NgaySinh);
		
		
		printf ("Hanh kiem cua hoc sinh thu %d la , tot  , kha  , TB  , Yeu  :",i);
		fflush (stdin);
		gets (a[i].HanhKiem);
		
		printf ("Diem trung binh cua hoc sinh thu %d la :",i);
		fflush (stdin);
		scanf ("%f",&a[i].DTB);
		printf ("\n\n");
	}
}
void inDSHS (int n , struct HS a[100]){
	int i;
	printf ("%5s %30s %30s %19s %10s","STT","Ho Ten","Ngay Sinh","Hanh Kiem","DTB");
	for (i=1 ; i<=n ; i++){
		printf ("\n%5d %30s %30s %19s %10.2f",i,a[i].HoTen,a[i].NgaySinh,a[i].HanhKiem,a[i].DTB);
	}
}
// phan 2
void tinhtien (int n , struct HS a[100]){
	int i;
	char Tot[]="tot";
	printf ("\n%5s %30s %30s %19s %10s %20s","STT","Ho Ten","Ngay Sinh","Hanh Kiem","DTB","Tien Thuong(dong)");
	for(i=1 ; i<=n ; i++){
		if (a[i].DTB >=9 && strcmpi (a[i].HanhKiem,Tot)==0 ){
			a[i].TienThuong=2000000;
		printf ("\n%5d %30s %30s %19s %10.2f %20li",i,a[i].HoTen,a[i].NgaySinh,a[i].HanhKiem,a[i].DTB,a[i].TienThuong);
	
		}else if ((a[i].DTB>=8 )&&(a[i].DTB<9)&&(strcmpi (a[i].HanhKiem,Tot)==0)){
				a[i].TienThuong=1000000;
		
		printf ("\n%5d %30s %30s %19s %10.2f %20li",i,a[i].HoTen,a[i].NgaySinh,a[i].HanhKiem,a[i].DTB,a[i].TienThuong);
	
		}else if ((a[i].DTB <8)||(strcmpi (a[i].HanhKiem,Tot)!=0)) {
			printf ("\nhoc sinh %d khong duoc thuong ",i);
		}
	}
}














