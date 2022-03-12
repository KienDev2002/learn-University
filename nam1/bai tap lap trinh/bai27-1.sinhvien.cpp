#include<string.h>
#include<stdio.h>
struct SV {
	char HoTen[12];
	char Lop[10];
	float toan , ly , hoa ,tong;
};
void nhapsinhvien (int n , SV A[100]);
int main (){
	int n;
	SV A[100];
	printf ("nhap n sinh vien =");
	scanf ("%d",&n);
	
}
void nhapsinhvien (int n , SV A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf ("nhap Ho Ten sinh vien thu %d: ",i);
		fflush (stdin);
		gets (A[i].HoTen);
		
		printf ("nhap lop cua sinh vien thu %d: ",i);
		fflush (stdin);
		gets (A[i].Lop);
		
		printf ("nhap diem Toan Ly Hoa cua sinh vien thu %d=",i);
		fflush (stdin);
		scanf("%0.2f  %0.2f  %0.2f",&A[i].toan, &A[i].ly, &A[i].hoa);
		A[i].tong = (A[i].toan +A[i].ly +A[i].hoa);
	}
}









