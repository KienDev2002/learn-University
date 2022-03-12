#include<stdio.h>
#include<math.h>
#include<string.h>
struct GV {
	char HoTen[12];
	int Tuoi;
	bool GioiTinh;
};
void nhapin (int n , GV A[100]);
void sosanh (int n , GV A[100]);
void tuoitim (int n , GV A[100] , int tuoit);
int main(){
	int n;
	GV A[100];
	int tuoit;
	printf("\n nhap n giang vien: ");
	scanf ("%d",&n);
	printf("\n nhap 1 tuoi t can tim la: ");
	scanf("%d",&tuoit);
	nhapin (n,A);
	sosanh (n,A);
	tuoitim(n,A,tuoit);
}
void nhapin (int n , GV A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap ho ten giang vien thu %d la: ",i);
		fflush (stdin);
		gets(A[i].HoTen);
		printf("nhap tuoi giang vien thu %d la: ",i);
		fflush (stdin);
	    scanf("%d",&A[i].Tuoi);
	   	printf("nhap gioi tinh giang vien thu %d la , nhap theo cau truc 1 la nam , 0 la nu: ",i);
		fflush (stdin);
	    scanf("%d",&A[i].GioiTinh);	
	}
	printf("\n %5s %20s %10s %10s","STT","Ho ten","Tuoi","Gioi Tinh");
	for (i=1 ; i<=n ; i++){
		printf("\n %5d %20s %10d %10d",i,A[i].HoTen,A[i].Tuoi,A[i].GioiTinh);
	}
}
void sosanh (int n , GV A[100]){
	int i,kq,min1,min2;
	for (i=1 ; i<=n ; i++){
		if (A[i].GioiTinh==1){
		    min1 = A[i].Tuoi;
			break;	
		}
	}
	for (i=1 ; i<=n ; i++){
		if (A[i].GioiTinh==1&&min1>A[i].Tuoi){
		    min1 = A[i].Tuoi;	
		}
	}
	for (i=1 ; i<=n ; i++){
		if (A[i].GioiTinh==0){
		    min2 = A[i].Tuoi;
			break;	
		}
	}
	for (i=1 ; i<=n ; i++){
		if (A[i].GioiTinh==0&&min2>A[i].Tuoi){
		    min2 = A[i].Tuoi;	
		}
	}
    if (min1>min2){
    	printf("\n giang vien nam co tuoi be nhat lon hon giang vien nu co tuoi be nhat");
	}else if (min1==min2){
		printf("\n giang vien nam co tuoi be nhat bang giang vien nu co tuoi be nhat");
	}else{
     	printf("\n giang vien nam co tuoi be nhat it hon giang vien nu co tuoi be nhat");
	}
}
void tuoitim (int n , GV A[100] , int tuoit){
	printf("\n danh sach giang vien co tuoi %d la: ",tuoit);
	printf("\n %5s %20s %10s %10s","STT","Ho ten","Tuoi","Gioi Tinh");
	int i,dem=0;;
	for (i=1 ; i<=n ; i++){
		if (A[i].Tuoi==tuoit){
			dem++;
			printf("\n %5d %20s %10d %10d",i,A[i].HoTen,A[i].Tuoi,A[i].GioiTinh);
		}
	}
	if (dem==0){
		printf("\n khong co giang vien nao co tuoi %d",tuoit);
	}
}



















