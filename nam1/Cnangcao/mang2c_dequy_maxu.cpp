#include <stdio.h>
#include <conio.h>
#include <limits.h>

void NhapMang(int **a, int m, int n, int i = 0){
	if(i == m*n){
		return; 
	}
	printf("\nNhap vao a[%d][%d] = ", i / n, i % n);
	scanf("%d", &a[i / m][i % n]);
	NhapMang(a, m, n, i + 1);
}
void XuatMang(int **a, int m, int n, int i = 0){
	if(i == m * n){
		return;
	}
	if(i % n == 0){
		printf("\n");
	}
	printf("%4d", a[i / n][i % n]);
	XuatMang(a, m, n, i + 1);
}
int TinhTong(int **a, int m, int n, int i = 0, int Tong = 0){
	if(i == m * n){
		return Tong;
	}
	return TinhTong(a, m, n, i + 1, Tong + a[i / n][i % n]);
}
int TimMin(int **a, int m, int n, int i = 0, int Min = INT_MAX){
	if(i == m* n){
		return Min;
	}
	return TimMin(a, m, n, i + 1, a[i / n][i % n] < Min ? a[i / n][i % n] : Min);
}
int DemSoLuongSoChan(int **a, int m, int n, int i = 0, int dem = 0){
	if(i == m*n){
		return dem;
	}
	return DemSoLuongSoChan(a, m, n, i + 1, a[i / n][i % n] % 2 == 0 ? dem + 1 : dem);
}
void HoanVi(int &a, int &b){
	int Temp = a;
	a = b;
	b = Temp;
}
void SapTangDan(int **a, int m, int n, int i = 0){
	if(i == m * n - 1){
		return;
	}
	for(int k = i + 1; k < m*n; k++){
		if(a[i / n][i % n] > a[k /n][k % n]){
			HoanVi(a[i / n][i % n], a[k / n][k % n]);
		}
	}
	SapTangDan(a, m, n, i + 1);
}
int main(){
	int m,n;
	printf("nhap m: ");
	scanf("%d",&m);
	printf("nhap n: ");
	scanf("%d",&n);
	int **a = new int *[m];// cap phat m dong cho con tro cap 2
	for (int i=0;i<m;i++){
		a[i]=new int [n];// cap phat n o nho cho cot
	}
	NhapMang(a, m, n);
	XuatMang(a,m, n);
	printf("\nTong la: %d", TinhTong(a,m ,n));
	printf("\nMin = %d", TimMin(a, m, n));
	printf("\nSo luong so chan = %d", DemSoLuongSoChan(a, m, n));
	SapTangDan(a, m, n);
	printf("\nMang sau khi sap tang dan la: ");
	XuatMang(a, m, n);
	for (int i=0;i<m;i++){
		delete [] a[i];// giai phong cot
	}
	delete [] a;// giai phong bo nho con tro cap 2
	getch();
	return 0;
}
