#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
struct Hang {
	char MaHang[50];
	char TenHang[50];
	char LoaiHang[50];
	long GiaTien;
};
void nhapin (int n , Hang A[100]);
void xuatds (int n , Hang A[100]);
void gia (int n , Hang A[100],char loaihang[12]);
void giamax (int n , Hang A[100], char loaihang[12]);
void hangmaxmin (int n , Hang A[100]);
int main(){
	int n;
	Hang A[100];
	char loaihang[12];
	printf("nhap n mat hang: ");
	scanf("%d",&n);
	printf("nhap vao 1 loai hang: ");
	fflush(stdin);
	gets(loaihang);	
	nhapin (n,A);
	xuatds (n,A);
	gia (n,A,loaihang);
	giamax (n,A,loaihang);
	hangmaxmin(n,A);
}
void nhapin (int n , Hang A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap ma hang thu %d: ",i);
		fflush(stdin);
		gets(A[i].MaHang);
		printf("nhap ten hang thu %d: ",i);
		fflush(stdin);
		gets(A[i].TenHang);
		printf("nhap loai hang thu %d: ",i);
		fflush(stdin);
		gets(A[i].LoaiHang);
		printf("nhap gia tien hang thu %d: ",i);
		fflush(stdin);
		scanf("%li",&A[i].GiaTien);
	}
	printf("nhung mat hang la: ");
	printf("\n%5s %20s %20s %10s %10s","STT","Ma Hang","Ten Hang","Loai Hang","Gia Tien");
	for (i=1 ; i<=n ; i++){
	    printf("\n%5d %20s %20s %10s %10li",i,A[i].MaHang,A[i].TenHang,A[i].LoaiHang,A[i].GiaTien);
	}
}
void xuatds (int n , Hang A[100]){
	printf("\ndanh sach mat hang lon hon 15.000.000: ");
	int i;
	int dem=0;
	for (i=1 ; i<=n ; i++){
		if (A[i].GiaTien>15000000){
			  printf("\n%5d %20s %20s %10s %10li",i,A[i].MaHang,A[i].TenHang,A[i].LoaiHang,A[i].GiaTien);
              dem++;
		}
	}
	printf("\n co %d mat hang lon hon 15.000.000",dem);
}
void gia (int n , Hang A[100],char loaihang[12]){
	int i;
	printf("\nGia TB  mat hang cua loai hang %10s la: ",loaihang);
	int d=0;
	double S=0;
	for (i=1 ; i<=n ; i++){
		if (strcmpi(A[i].LoaiHang,loaihang)==0){
			d++;
			S=S+A[i].GiaTien;
		}
	}
	printf("%0.2f",double (S/d));
}
void giamax (int n , Hang A[100], char loaihang[12]){
	int i;
	long max;
	int luui;
	printf("\nmat hang co gia lon nhat cua %5s la ",loaihang);
	for (i=1 ; i<=n ; i++){
		if (strcmpi(A[i].LoaiHang,loaihang)==0){
			 max=A[i].GiaTien;
			 break;
		}
	}
	for (i=1 ; i<=n ; i++){
		if ((strcmpi(A[i].LoaiHang,loaihang)==0)&&(A[i].GiaTien>max)){
			max=A[i].GiaTien;
			luui=i;
		}
	}
		  printf("\n%5d %20s %20s %10s %10li",luui,A[luui].MaHang,A[luui].TenHang,A[luui].LoaiHang,A[luui].GiaTien);
}
void hangmaxmin (int n , Hang A[100]){
	int i;
	long max=A[1].GiaTien;
	int min=A[1].GiaTien;
	int luulaii;
	int luulai;
	for (i=1 ; i<=n ; i++){
		if (A[i].GiaTien>max){
			max=A[i].GiaTien;
			luulaii=i;
		}
	}
	printf("\nhang co gia tri lon nhat la: ");
			  printf("\n%5d %20s %20s %10s %10li",luulaii,A[luulaii].MaHang,A[luulaii].TenHang,A[luulaii].LoaiHang,A[luulaii].GiaTien);
   	for (i=1 ; i<=n ; i++){
		if (A[i].GiaTien<min){
			min=A[i].GiaTien;
			luulai=i;
		}
	}
	printf("\nhang co gia tri nho nhat la: ");
			  printf("\n%5d %20s %20s %10s %10li",luulai,A[luulai].MaHang,A[luulai].TenHang,A[luulai].LoaiHang,A[luulai].GiaTien);
}










