#include<stdio.h>
#include<string.h>
#include<math.h>
struct CauThu {
	char HoTen[12];
	long ThamNien;
	char ViTri[12];
};
void nhap (int n , CauThu A[100]);
void in (int n , CauThu A[100]);
void thamniencao (int n , CauThu A[100]);
void kiemtra (int n , CauThu A[100], char cauthumoi[100]);
int main (){
	int n,i;
	char cauthumoi [100];
	CauThu A[100];
	printf ("nhap n cau thu =");
	scanf ("%d",&n);	
	nhap (n,A);
	in (n,A);
	thamniencao (n,A);
	kiemtra (n,A,cauthumoi);
}
void nhap (int n , CauThu A[100],cha){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("Ho Ten cau thu thu %d la: ",i);
		fflush(stdin);
		gets (A[i].HoTen);
		printf ("Tham Nien cua cau thu thu %d (so nam da bong): ",i);
		fflush (stdin);
		scanf ("%li",&A[i].ThamNien);
		printf ("Vi Tri cua cau thu thu %d TD , TV , TM: ",i);
		fflush(stdin);
		gets (A[i].ViTri);
	}
}
void in (int n , CauThu A[100]){
	int i;
	printf("\n %5s %20s %20s %6s","STT","Ho Ten","Tham Nien","Vi Tri");
	for (i=1 ; i<=n ; i++){
		printf ("\n %5d %20s %20li %6s",i,A[i].HoTen,A[i].ThamNien,A[i].ViTri);
	}
}
void thamniencao (int n , CauThu A[100]){
	printf ("\ndanh sach cau thu Tien Dao co Tham Nien cao nhat la: ");
	int i;
	int max= A[1].ThamNien;
	char TienDao[]="TD";
	for (i=1 ; i<=n ; i++){
		if ((strcmpi(A[i].ViTri,TienDao)==0)&&((A[i].ThamNien)>max)){
			printf ("\n%5d %20s %20li %6s",i,A[i].HoTen,A[i].ThamNien,A[i].ViTri);
		}
	}
}
void kiemtra (int n , CauThu A[100] ,char cauthumoi[100]){
	int dem =0;
		printf ("Ho Ten cau thu moi la: ");
		fflush(stdin);
		gets (cauthumoi);
		printf ("Tham Nien cua cau thu moi (so nam da bong): ");
		fflush (stdin);
		scanf ("%li",&cauthumoi);
		printf ("Vi Tri cua cau thu moi TD , TV , TM: ");
		fflush(stdin);
		gets (cauthumoi);
		for (int i=1 ; i<=n ; i++){
			if ((cauthumoi==A[i].HoTen)&&(cauthumoi==A[i].ThamNien)&&(cauthumoi==A[i].ViTri)){
				dem++;
			}
		}
		printf ("co %d cau thu trong danh sach",dem);
}













