#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>
struct SV {
	char HoTen[12];
	char Lop[12];
	float Diem;
	float Toan;
	float Ly;
	float Hoa;
	float DTB;
};
void nhapin (int n , SV A[100]){
	int i;
	for (i=1;i<=n;i++){
		printf("nhap Ho Ten cua sinh vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].HoTen);
		printf("nhap lop cua sinh vien thu %d la: ",i);
		fflush(stdin);
		gets(A[i].Lop);
	    printf("nhap Diem cua sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].Diem);
	    printf("nhap Diem Toan cua sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].Toan);
	    printf("nhap Diem Ly cua sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].Ly);
	    printf("nhap Diem Hoa cua sinh vien thu %d la: ",i);
		fflush(stdin);
		scanf ("%f",&A[i].Hoa);
	    A[i].DTB=(A[i].Toan+A[i].Ly+A[i].Hoa)/3;
	}
			printf("%5s %20s %15s %10s %10s %10s %10s %10s","STT","Ho Ten","Lop","Diem","Toan","Ly","Hoa","DTB");
	for (i=1;i<=n;i++){
			printf("\n%5d %20s %15s %10.2f %10.2f %10.2f %10.2f %10.2f",i,A[i].HoTen,A[i].Lop,A[i].Diem,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].DTB);
	}
}
void TB (int n , SV A[100]){
	printf("\n");
	int i,d=0,dd=0,ddd=0;
	float tongTB1 =0;
	float tongTB2 =0;
	float tongTB3 =0;
	char lop1[12]="CNTT1";
	char lop2[12]="CNTT2";
	char lop3[12]="CNTT3";

	for (i=1;i<=n;i++){
		if (strcmp(A[i].Lop,lop1)==0){
			d++;
			tongTB1=tongTB1 +A[i].Diem;
		}else if (strcmp(A[i].Lop,lop2)==0){
			dd++;
			tongTB2=tongTB2 +A[i].Diem;	
		}else if (strcmp(A[i].Lop,lop3)==0){
			tongTB3=tongTB3 +A[i].Diem;	
			ddd++;
		}
	}
	if (d==0){
		printf("\nkhong co sinh vien nao lop CNTT1");
	}else{ 
		printf("\nDTB lop CNTT1 la: %0.2f",tongTB1/d);
	}
	if (dd==0){
		printf("\nkhong co sinh vien nao lop CNTT2");
	}else{ 
		printf("\nDTB lop CNTT2 la: %0.2f",tongTB2/dd);
	}
	if (ddd==0){
		printf("\nkhong co sinh vien nao lop CNTT3");
	}else{ 
		printf("\nDTB lop CNTT3 la: %0.2f",tongTB3/ddd);
	}
}
void diemcao (int n , SV A[100]){
		printf("\ndanh sach sinh vien co diem cao nhat la: \n%5s %20s %15s %10s %10s %10s %10s %10s","STT","Ho Ten","Lop","Diem","Toan","Ly","Hoa","DTB");
	int i;
	float max= A[1].Diem;
	for (i=2;i<=n;i++){
		if (A[i].Diem>max){
			max=A[i].Diem;
		}
	}
	for (i=1;i<=n;i++){
		if (max==A[i].Diem){
				printf("\n%5d %20s %15s %10.2f %10.2f %10.2f %10.2f %10.2f",i,A[i].HoTen,A[i].Lop,A[i].Diem,A[i].Toan,A[i].Ly,A[i].Hoa,A[i].DTB);		
		}
	}
}
int  main(){
	int n;
	scanf("%d",&n);
	SV A[100];
	nhapin (n,A);
	TB (n,A);
	diemcao(n,A);
}
