#include<stdio.h>
#include<math.h>
#include<string.h>
struct SV {
	char Ma[12];
	char HoTen[12];
	char Lop[12];
	float Toan;
	float Ly;
	float Hoa;
	float tongdiem;
};
void nhapin (int n, SV A[100]);
void tongdiemmax (int n , SV A[100]);
int main(){
	int n;
	SV A[100];
	printf("nhap n sinh vien: ");
	scanf("%d",&n);
	nhapin (n,A);
	tongdiemmax (n,A);
}
void nhapin (int n, SV A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap ma sinh vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].Ma);
		printf("nhap ho ten sinh vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].HoTen);
		printf("nhap lop cua sinh vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].Lop);
		printf("nhap diem toan sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].Toan);
		printf("nhap diem Ly sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].Ly);
		printf("nhap diem Hoa sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf("%f",&A[i].Hoa);
		A[i].tongdiem = A[i].Toan+A[i].Ly+A[i].Hoa;
	}
	printf ("danh sach sinh vien la: ");
		printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	for (i=1 ;i<=n ; i++ ){
    	printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].tongdiem);
	}
}
void tongdiemmax (int n , SV A[100]){
	
}

