#include<string.h>
#include<stdio.h>
 struct SV {
	char HoTen[15];
	char NgaySinh[20];
	bool GioiTinh;
	float Diem;	
	float toan , ly , hoa , dtb;
};
void NhapDSSV (int n , struct SV a[100]);
void inDSSV (int n , struct SV a[100]);
void KiemTraNgaySinh (int n , struct SV a[100],char Ngay[12]);
void DTBgiamdan (int n , struct SV a[100]);
void DTBcaonhat (int n , struct SV a[100]);
int main (){
	int i,j ,n ;
	struct SV a[100];
	char Ngay[12];
	printf ("nhap so sinh vien=");
	scanf ("%d",&n);
	printf ("nhap vao mot ngay sinh:");
	fflush(stdin);
	gets(Ngay);
	NhapDSSV (n,a);
	inDSSV(n,a);
	KiemTraNgaySinh(n,a,Ngay);
	DTBgiamdan (n,a);
	DTBcaonhat(n,a);
}
void NhapDSSV (int n , struct SV a[100]){
	int i ;
	for (i=1 ; i<=n ; i++){
		printf ("Ho Ten sinh vien thu %d:",i);
		gets (a[i].HoTen);
		
		printf ("Ngay sinh cua sinh vien thu %d , nhap theo cau truc dd/mm/yyyy:");
		fflush(stdin);
		gets(a[i].NgaySinh);
		
		printf ("Gioi tinh cua sinh vien thu %d , nhap nam la 1 , nu la 2:",i);
		fflush(stdin);
		scanf ("%d",&a[i].GioiTinh);
		
		
		printf ("Diem cua sinh vien thu %d:",i);
		fflush (stdin);
		scanf ("%f",&a[i].Diem);
		printf ("diem toan , ly , hoa cua sinh vien thu %d la :",i);
		fflush(stdin);
		scanf("%f%f%f",&a[i].toan , &a[i].ly , &a[i].hoa);
		a[i].dtb=( a[i].toan + a[i].ly + a[i].hoa)/3;
	}
}
void inDSSV (int n , struct SV a[100]){
	int i,j;
	printf ("%5s %30s  %12s %12s %6s %6s","STT","Ho Ten","Ngay Sinh","Gioi Tinh","Diem","dtb");
	for (i=1 ; i<=n ; i++){
		printf ("\n%5d %30s %12s %12d %6.2f %6.2f",i,a[i].HoTen,a[i].NgaySinh,a[i].GioiTinh,a[i].Diem,a[i].dtb);
	}
}
void KiemTraNgaySinh (int n , struct SV a[100],char Ngay[12]){
	int i;
	printf ("\nsinh vien sinh ngay %12s la :",Ngay);
	for (i=1 ; i<=n ; i++){
		if (strcmpi(a[i].NgaySinh,Ngay)==0){
			printf ("\n %5d %30s %12s %12d %6.2f %6.2f ",i,a[i].HoTen,a[i].NgaySinh,a[i].GioiTinh,a[i].Diem,a[i].dtb);
		}
	}
}
void DTBgiamdan (int n , struct SV a[100]){
	printf ("\ndanh sach sinh vien co DTB giam dan la :\n");
	int i ,j;
	for (i=1 ; i<=n ; i++){
		for (j=i+1 ; j <=n ; j++){
			if (a[i].dtb<a[j].dtb){
				struct SV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
     for (i=1 ; i<=n ; i++){
	         	printf ("\n%5d %30s %12s %12d %6.2f %6.2f",i,a[i].HoTen,a[i].NgaySinh,a[i].GioiTinh,a[i].Diem,a[i].dtb);
	    }
}
void DTBcaonhat (int n , struct SV a[100]){
	printf ("\nin ra sinh vien co DTB cao nhat la :");
	int i,lonnhat =1 ;
	
	float max = a[1].dtb;
	for (i=1 ; i<=n ; i++){
		if (a[i].dtb > max){
			max = a[i].dtb;
	      }
       }
       printf ("%f",max);
}
	

















