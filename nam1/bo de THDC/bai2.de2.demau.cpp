#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
struct SV {
	char HoTen [12];
	char Lop[12];
	float diem;
};
void nhapin (int n , SV A[100]);
void DiemTb (int n , SV A[100]);
void Diemmax (int n , SV A[100]);
int main(){
	int n;
	SV A[100];
	printf ("nhap n sinh vien=");
	scanf ("%d",&n);
	nhapin(n,A);
	DiemTb(n,A);
	Diemmax(n,A);
}
void nhapin (int n , SV A[100]){
	int i;
	for (i=1 ; i<=n ;i++){
		printf ("Ho Ten sinh vien thu %d: ",i);
		fflush(stdin);
		gets(A[i].HoTen);
		printf ("lop cua sinh vien thu %d: ",i);
		fflush(stdin);
		gets (A[i].Lop);
		printf ("Diem cua sinh vien thu %d: ",i);
		fflush (stdin);
		scanf ("%f",&A[i].diem);
	}
	printf ("\n%5s %20s %7s %10s","STT","Ho Ten","Lop","Diem");
	for (i=1 ; i<=n; i++){
		printf ("\n%5d %20s %7s %10.2f",i,A[i].HoTen,A[i].Lop,A[i].diem);
	}
}
void DiemTb (int n , SV A[100]){
 	int i,dem=0,dd=0,d=0;
 	float TBCNTT1 =0;
 	char lop1 []="CNTT1";
 	float TBCNTT2 =0;
 	char lop2 []="CNTT2";
 	float TBCNTT3 =0;
 	char lop3 []="CNTT3";
 	printf ("\nDiem trung binh cua lop CNTT1 la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmpi (A[i].Lop,lop1)==0){
 			dem++;
 			TBCNTT1=TBCNTT1+(A[i].diem);
		 }
	 }
	 printf ("TBCNTT1=%0.2f",float(TBCNTT1/dem));
	printf ("\nDiem trung binh cua lop CNTT2 la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmpi (A[i].Lop,lop2)==0){
 			dd++;
 			TBCNTT2=TBCNTT2+(A[i].diem);
		 }
	 }
	 printf ("TBCNTT2=%0.2f",float(TBCNTT2/dd));
	printf ("\nDiem trung binh cua lop CNTT3 la: ");
 	for (i=1 ; i<=n ; i++){
 		if (strcmpi (A[i].Lop,lop3)==0){
 			d++;
 			TBCNTT3=TBCNTT3+(A[i].diem);
		 }
	 }
	 printf ("TBCNTT3=%0.2f",float(TBCNTT3/d));
}
void Diemmax (int n , SV A[100]){
	printf ("\ndanh sach sinh vien diem cao nhat la: ");
	printf ("\n%5s %20s %7s %10s","STT","Ho Ten","Lop","Diem");
	int i;
	float max =A[1].diem;
	for (i=1 ; i<=n ; i++){
		if (A[i].diem >=max ){
			printf ("\n%5d %20s %7s %10.2f",i,A[i].HoTen,A[i].Lop,A[i].diem);
		}
	}
}






