#include<string.h>
#include<math.h>
#include<stdio.h>
struct PH {
	char MaPhong[12];
	char GD[12];
	long SoGhe;
};
void nhapin (int n , PH A[100]);
void baphong (int n , PH A[100]);
void sapxep (int n , PH A[100]);
int main(){
	int n;
	PH A[100];
	printf("nhap n phong hoc: ");
	scanf ("%d",&n);
	nhapin (n,A);
	baphong (n,A);
	sapxep (n,A);
}
void nhapin (int n , PH A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap Ma Phong thu %d la: ",i);
		fflush(stdin);
		gets(A[i].MaPhong);
		printf("nhap giang duong thu %d la: ",i);
		fflush(stdin);
		gets(A[i].GD);
		printf("nhap so ghe cua phong thu %d la: ",i);
		fflush(stdin);
		scanf("%li",&A[i].SoGhe);
	}
	printf("danh sach cac phong hoc la: ");
			printf("\n%5s  %20s %20s %10s","STT","Ma Phong","Giang duong","So ghe");
	for (i=1; i<=n ; i++){
         printf("\n%5d %20s %20s %10li",i,A[i].MaPhong,A[i].GD, A[i].SoGhe);
	}
}
//dua ra 3 phong hoc co ghe ngoi nhieu nhat 
void baphong (int n , PH A[100]){
	printf("\n 3 phong hoc co so ghe ngoi nhieu nhat la: ");
	printf("\n%5s  %20s %20s %10s","STT","Ma Phong","Giang duong","So ghe");
	int i;
	for (i=1 ; i<=n ; i++){
		for (int j=i+1; j<=n ; j++){
			if (A[i].SoGhe<A[j].SoGhe){
				PH stemp=A[i];
				A[i]=A[j];
				A[j]=stemp;
			}
		}
	}
	for (i=1 ; i<4 ; i++){
	    printf("\n%5d %20s %20s %10li",i,A[i].MaPhong,A[i].GD, A[i].SoGhe);
	}
}


















