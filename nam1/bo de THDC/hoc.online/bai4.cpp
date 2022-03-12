#include<stdio.h>
#include<math.h>
#include<string.h>
struct nhanvien {
	char Ma[12];
	char HoTen[12];
	long Tuoi;
	char CV[12];
	long HSL;
	long thuong;
	long luong;
};
void nhap (int n , nhanvien A[100], long LCB);
void tim (int n , nhanvien A[100], char ma[50], long LCB);
void luongcao (int n , nhanvien A[100], long LCB);
int main (){
	int n;
	nhanvien A[100];
	long LCB;
	char ma[50];
	printf("nhap n nhan vien: ");
	scanf("%d",&n);
	printf("nhap luong co ban cua nhan vien la: ");
	scanf("%li",&LCB);
	printf("nhap 1 ma nhan vien la: ");
	fflush(stdin);
	gets(ma);
	nhap (n,A,LCB);
	tim (n,A,ma,LCB);
	luongcao (n,A,LCB);
}
void nhap (int n , nhanvien A[100], long LCB){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap ma nhan vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].Ma);
		printf("nhap ho ten nhan vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].HoTen);
		printf("nhap tuoi nhan vien thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].Tuoi);
		printf("nhap chuc vu nhan vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].CV);
		printf("nhap he so luong thuong nhan vien thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].HSL);
		printf("nhap luong thuong thuong nhan vien thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].thuong);	
	}
			printf("\n %5s %10s %20s %16s %16s %15s %15s %15s ","STT","Ma","Ho Ten","Tuoi","chuc vu","He so luong","thuong","Luong");
	for (i=1 ; i<=n ; i++){
		    long luong = A[i].HSL*LCB+A[i].thuong;
			printf("\n %5d %10s %20s %16li %16s %15li %15li %15li",i,A[i].Ma,A[i].HoTen,A[i].Tuoi,A[i].CV, A[i].HSL, A[i].thuong,luong);
	}
}
//tim nhan vien co ma x
void tim (int n , nhanvien A[100], char ma[50],long LCB){
	int i;
	printf("\n nhan vien co ma nhan vien %5s la: ",ma);
	printf("\n %5s %10s %20s %16s %16s %15s %15s %15s ","STT","Ma","Ho Ten","Tuoi","chuc vu","He so luong","thuong","Luong");
	int dem=0;
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].Ma,ma)==0){
			dem++;
		    long luong = A[i].HSL*LCB+A[i].thuong;
			printf("\n %5d %10s %20s %16li %16s %15li %15li %15li",i,A[i].Ma,A[i].HoTen,A[i].Tuoi,A[i].CV, A[i].HSL, A[i].thuong,luong);
		}	
	}
	if (dem==0){
		printf("\n khong co nhan vien nao thuoc ma 5s",ma);
	}
}
//in nhan vien luong cao nhat
void luongcao (int n , nhanvien A[100], long LCB){
	printf("\nnhan vien co luong cao nhat la: ");
	printf("\n %5s %10s %20s %16s %16s %15s %15s %15s ","STT","Ma","Ho Ten","Tuoi","chuc vu","He so luong","thuong","Luong");
	int i;
	int luui=i;
	long max=A[1].HSL*LCB+A[1].thuong;
	for (i=1 ; i<=n ; i++){
		if ((A[i].HSL*LCB+A[i].thuong)>max){
			max=A[i].HSL*LCB+A[i].thuong;
			luui=i;
		}
	}
   	printf("\n %5d %10s %20s %16li %16s %15li %15li %15li",luui,A[luui].Ma,A[luui].HoTen,A[luui].Tuoi,A[luui].CV, A[luui].HSL, A[luui].thuong,max);
}











