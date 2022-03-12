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
void Hoamin (int n , SV A[100]);
void Toanmax (int n , SV A[100]);
void diemliet (int n , SV A[100]);
void quamon (int n , SV A[100]);
void tongdiemmaxmin(int n , SV A[100]);
void giamdanhoa (int n , SV A[100]);
void tongdiemmax (int n , SV A[100]);
int main(){
	int n;
	SV A[100];
	printf("nhap n sinh vien: ");
	scanf("%d",&n);
	nhapin (n,A);
	Hoamin (n,A);
	Toanmax (n,A);
	diemliet (n,A);
	quamon (n,A);
	tongdiemmaxmin (n,A);
	giamdanhoa (n,A);
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
		A[i].tongdiem = (A[i].Toan+A[i].Ly+A[i].Hoa)/3;
	}
	printf ("danh sach sinh vien la: ");
		printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	for (i=1 ;i<=n ; i++ ){
    	printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].tongdiem);
	}
}
//in sinh vien co diem hoa thap nhat
void Hoamin (int n , SV A[100]){
	int i;
	int luu;
	float min =A[1].Hoa;
	for (i=1 ; i<=n ; i++){
		if (min>A[i].Hoa){
			min=A[i].Hoa;
			luu=i;
		}
	}
	printf("\n sinh vien co diem Hoa thap nhat la: ");
    	printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",luu,A[luu].HoTen,A[luu].Lop,A[luu].Toan,A[luu].Ly,A[luu].Hoa,A[luu].tongdiem);
}
// in sinh vien diem toan cao nhat
void Toanmax (int n , SV A[100]){
	int i;
	int luui;
	float max =A[1].Toan;
	for (i=1 ; i<=n ; i++){
		if (max<A[i].Toan){
			max=A[i].Toan;
			luui=i;
		}
	}
	printf("\n sinh vien co diem Toan cao nhat la: ");
    	printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",luui,A[luui].HoTen,A[luui].Lop,A[luui].Toan,A[luui].Ly,A[luui].Hoa,A[luui].tongdiem);	
}
//kiem tra xem co sinh vien nao co diem liet khong (<=1 diem liet)
void diemliet (int n , SV A[100]){
	int i;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i].Toan<=1)||(A[i].Ly<=1)||(A[i].Hoa<=1)){
			d++;
		}
	}
	if (d==0){
		printf("\n khong co sinh vien nao bi diem liet");
	}else{
		printf("\n co %d sinh vien bi diem liet",d);
	}
}
//in ra sinh vien qua mon (khong co diem liet nao va dtb>5)
void quamon (int n , SV A[100]){
	printf("\n danh sach sinh vien qua mon la: ");
	printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	int i;
	int dem=0;
	for (i=1; i<=n ; i++){
        float dtb=A[i].tongdiem/3;
        if (A[i].Toan>1&&A[i].Ly>1&&A[i].Hoa>1&&dtb>5){
        	dem++;
        	printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].tongdiem);
		}
	}
	if (dem==0){
		printf("\n tat ca sinh vien deu khong qua mon");
	}
}
//in ra 3 ban co tong diem cao nhat va 3 ban co tong diem thap nhat
void tongdiemmaxmin(int n , SV A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
        for (int j=i+1; j<=n ; j++){
           if (A[i].tongdiem<A[j].tongdiem){
           	    SV stemp=A[i];
           	    A[i]=A[j];
           	    A[j]=stemp;
		   }
		}
	}
	printf("\n 3 sinh vien co diem cao nhat la: ");
	printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	for (i=1 ; i<4 ; i++){
		printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].tongdiem);
	}
	for (i=1 ; i<=n ; i++){
        for (int j=i+1; j<=n ; j++){
           if (A[i].tongdiem>A[j].tongdiem){
           	    SV stemp1=A[i];
           	    A[i]=A[j];
           	    A[j]=stemp1;
		   }
		}
	}
	printf("\n 3 sinh vien co diem thap nhat la: ");
	printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	for (i=1 ; i<4 ; i++){
		printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].tongdiem);
	}
}
//sapxep giam dan theo diem hoa
void giamdanhoa (int n , SV A[100]){
	for (int i=1 ; i<=n ;i++){
		for (int j=i+1 ; j<=n ; j++){
			if (A[i].Hoa<A[j].Hoa){
			SV	stemp= A[i];
				 A[i]= A[j];
				 A[j]= stemp;
			}
		}
	}
	printf("\n danh sach sinh vien giam dan theo diem hoa la: ");
	printf ("\n %5s %20s %15s %16s %15s %16s %16s","STT","Ho Ten","Lop","Toan","Ly","Hoa","Tong Diem");
	for (int i=1 ; i<=n ; i++){
		float tongdiem =A[i].Toan+A[i].Ly+A[i].Hoa;
		printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",i,A[i].HoTen,A[i].Lop,A[i].Toan,A[i].Ly,A[i].Hoa,tongdiem);
	}
}
void tongdiemmax (int n , SV A[100]){
	int i,j;
	int luuk;
	float max= A[1].tongdiem;
     printf ("\n sinh vien co tong diem cao nhat la: ");
	for (i=1; i<=n ; i++){
		if (max<A[i].tongdiem){
			max =A[i].tongdiem;
			luuk=i;
		}
	}
   		printf ("\n %5d %20s %15s %16.2f %15.2f %16.2f %16.2f",luuk,A[luuk].HoTen,A[luuk].Lop,A[luuk].Toan,A[luuk].Ly,A[luuk].Hoa,A[luuk].tongdiem);
}






















