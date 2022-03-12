#include <stdio.h>
#include<math.h>
#include <conio.h>
#include<string.h>
typedef struct{
	char HoTen[50];
	char NgaySinh[11];
	bool GioiTinh;
	float Diem;
} SV;
void NhapDSSV(SV DS[100], int n);
void InDSSV(SV DS[100], int n);
void KiemTraNgaySinh(SV DS[100], int n, char Ngay[11]);
void InDSSVtheoGioiTinh(SV DS[100], int n, bool GTinh);
void DSSVDiemCaoNhat(SV DS[100], int n);
void TB(SV DS[100], int n);
int main(){
	int n, i; char Ngay[11];
	SV DS[100];
	printf("Nhap so sinh vien: "); scanf("%d", &n);
	NhapDSSV(DS,n);
	InDSSV(DS,n);
	
	printf("\nNhap vao mot ngay sinh: "); 
	fflush(stdin);
	gets(Ngay);
	KiemTraNgaySinh(DS, n,Ngay);
	
	printf("\nDanh sach sinh vien nam:\n");
	InDSSVtheoGioiTinh(DS,n, 1);
	printf("\nDanh sach sinh vien nu:\n");
	InDSSVtheoGioiTinh(DS,n, 0);
	
	DSSVDiemCaoNhat(DS,n); printf("\n");
	TB(DS,n);
}
void NhapDSSV(SV DS[100], int n){
	int i;
	for(i=1; i<=n; i++){
		printf("\nHo ten sinh vien thu %d: ",i);
		fflush(stdin);
		gets(DS[i].HoTen);
		
		printf("Ngay sinh cua sinh vien thu %d, nhap theo cau truc dd/mm/yyyy: ",i);
		fflush(stdin);
		gets(DS[i].NgaySinh);
		
		printf("Gioi tinh sinh vien thu %d, Nam nhap 1, Nu nhap 0: ",i);
		fflush(stdin);
		scanf("%d", &DS[i].GioiTinh);
		
		printf("Diem sinh vien thu %d: ",i);
		fflush(stdin);
		scanf("%f", &DS[i].Diem);
	}
}
void InDSSV(SV DS[100], int n){
	int i;
	printf("\n%5s %30s %12s %12s %6s","STT","Ho ten", "Ngay sinh", "Gioi Tinh","Diem");
	for(i=1; i<=n; i++){
		printf("\n%5d %30s %12s %12d %6.2f",i,DS[i].HoTen, DS[i].NgaySinh, DS[i].GioiTinh,DS[i].Diem);
	}
}

void KiemTraNgaySinh(SV DS[100], int n, char Ngay[11]){
	int i, dem=0;
	printf("\nNhung sinh vien cung sinh ngay %11s la: \n", Ngay);
	for(i=1; i<=n; i++){
		if(strcmpi(DS[i].NgaySinh, Ngay)==0){
			printf("\n%5d %30s %12s %12d %3.2f",i,DS[i].HoTen, DS[i].NgaySinh, DS[i].GioiTinh,DS[i].Diem);
			dem++;
		}
	}
	if(dem==0){
		printf("\nKhong co sinh vien nao sinh vao ngay %11s", Ngay);
	}
}
void InDSSVtheoGioiTinh(SV DS[100], int n, bool GTinh){
	int i;
	printf("\n%5s %30s %12s %12s %6s","STT","Ho ten", "Ngay sinh", "Gioi Tinh","Diem");
	for(i=1; i<=n; i++){
		if(DS[i].GioiTinh==GTinh){
			printf("\n%5d %30s %12s %12d %6.2f",i,DS[i].HoTen, DS[i].NgaySinh, DS[i].GioiTinh,DS[i].Diem);
		}
	}
}
void DSSVDiemCaoNhat(SV DS[100], int n)
{
	int i;
	float max=DS[1].Diem;
	for(i=1;i<=n;i++)
	{
		if(DS[i].Diem>max)
		{
			max=DS[i].Diem;
		}
	}
	printf("\nDanh sach sinh vien co so diem cao nhat la: ");
	printf("\n%5s %30s %12s %12s %6s","STT","Ho ten", "Ngay sinh", "Gioi Tinh","Diem");
	for(i=1;i<=n;i++)
	{
		if(DS[i].Diem==max)
			printf("\n%5d %30s %12s %12d %6.2f",i,DS[i].HoTen, DS[i].NgaySinh, DS[i].GioiTinh,DS[i].Diem);
	}
}
void TB(SV DS[100], int n){
	int demnam=0,demnu=0; float tnam=0,tnu=0;
	for(int i=1;i<=n;i++){
		if(DS[i].GioiTinh==1){
        tnam+=DS[i].Diem;
		demnam++;
		}
		else
		{
		tnu+=DS[i].Diem;
		demnu++;
		}
	}
	if(demnam >0)
	printf("Trung binh diem cua nam = %.3f\n",tnam/(float)(demnam));
	else 
	printf("Khong co sinh vien nam");
	if(demnu >0)
	printf("Trung binh diem cua nu = %.3f\n",(tnu/(float)(demnu)));
	else 
	printf("Khong co sinh vien nu");
}
