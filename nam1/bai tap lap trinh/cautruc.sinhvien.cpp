#include<stdio.h>
#include<math.h>
#include<string.h>
 typedef struct {
 	char HoTen [50];
 	char NgaySinh[10];
 	bool GioiTinh;
 	float Diem;
 }SV;
  void NhapDSSV (SV DS [100],int n);
   void InDSSV (SV DS[100],int n);
    void KiemTraNgaySinh (SV DS[100],int n , char Ngay [11]);
 int main (){
 	int n ,i;
 	char Ngay[11];
 	SV DS[100];
 	printf ("nhap so sinh vien:");
	scanf ("%d",&n);
 	NhapDSSV (DS,n);
 	InDSSV(DS,n);
 	printf ("\n nhap vao mot ngay sinh:");
    fflush (stdin);
    gets(Ngay);
 	KiemTraNgaySinh (DS , n,Ngay);
}
 void NhapDSSV (SV DS [100],int n){
 	int i;
 	for (i=1 ; i<=n ; i++){
 		printf ("Ho ten sinh vien thu %d:",i);
 		fflush (stdin);
 		gets (DS[i].HoTen);
 		
 		printf ("Ngay sinh cua sinh vien thu %d, nhap theo cau truc dd/mm/yyyy:",i);
 		fflush (stdin);
 		gets (DS[i].NgaySinh);
 		
 		printf ("Gioi tinh sinh vien thu %d, Nam nhap 1 , Nu nhap 0: ",i);
 		fflush (stdin);
 		scanf ("%d",&DS[i].GioiTinh);
 		 printf ("Diem sinh vien thu %d:",i);
 		fflush (stdin);
 		 scanf ("%f",&DS[i].Diem);
	 }
 }
 void InDSSV (SV DS[100],int n){
 	int i;
 	printf ("%5s %30s %12s %12s %6s","STT","Ho Ten","Ngay sinh","Gioi tinh","Diem");
 	for (i=1 ; i<=n ; i++){
 		printf ("\n%5d %30s %12s %12d %6.2f",i,DS[i].HoTen,DS[i].NgaySinh,DS[i].GioiTinh,DS[i].Diem);
	 }
 }
 void KiemTraNgaySinh (SV DS[100],int n , char Ngay [11]){
 	int i, dem =0;
 	printf("nhung sinh vien cung sinh ngay %12s la:",Ngay);
 	for (i=1  ; i<=n ; i++){
 		if (strcmpi(DS[i].NgaySinh , Ngay)==0){
 			printf ("\n %5d %30s %12s %12d %3.2f",i,DS[i].HoTen, DS[i].NgaySinh, DS[i].GioiTinh , DS[i].Diem);
 			dem++;
		 }
	 }
	 if (dem==0){
	 	printf ("khong co sinh vien nao sinh ngay %12s",Ngay);
	 }
 }
 
 
 
 
 
 
 
 
 
 
 
 
