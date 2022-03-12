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
void thamniencao (int n , CauThu A[100]){
	printf("\n %5s %20s %20s %6s","STT","Ho Ten","Tham Nien","Vi Tri");
	int i,luui;
	char vt[12]="TD";
	long max;
	for (i=1;i<=n;i++){
		if (strcmpi (A[i].ViTri , vt)==0){
			max=A[i].ThamNien;
		}
	}
	for (i=1;i<=n;i++){
		if ((strcmpi (A[i].ViTri , vt)==0)&& max<= A[i].ThamNien){
		    max=A[i].ThamNien;
		}
	}
	for (i=1;i<=n;i++){
		if ((strcmpi (A[i].ViTri , vt)==0)&& max==A[i].ThamNien ){
				printf ("\n %5d %20s %20li %6s",i,A[i].HoTen,A[i].ThamNien,A[i].ViTri);	
		}
	}
}
int kiemtra (int n , CauThu A[100]){
	int dem=0;
	char hoten[12];
	long thamnien;
	char vitri[12];
		printf ("Ho Ten cau thu la: ");
		fflush(stdin);
		gets (hoten);
		printf ("Tham Nien cua cau thu (so nam da bong): ");
		fflush (stdin);
		scanf ("%li",&thamnien);
		printf ("Vi Tri cua cau thu  TD , TV , TM: ");
		fflush(stdin);
		gets (vitri);
		for (int i=1;i<=n;i++){
			if( (strcmpi (A[i].HoTen,hoten)==0) && (A[i].ThamNien==thamnien) && (strcmpi (A[i].ViTri,vitri)==0)){
				dem++;
			}
		}
		return dem;
}
int main (){
	int n,i;
	char cauthumoi [100];
	CauThu A[100];
	printf ("nhap n cau thu =");
	scanf ("%d",&n);	
	nhap (n,A);
	in (n,A);
	thamniencao (n,A);
	if (kiemtra(n,A)==0){
		printf("\n cau thu do khong co trong danh sach");
	}else{
			printf("\n cau thu do co trong danh sach");	
	}
}
void nhap (int n , CauThu A[100]){
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
