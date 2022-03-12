#include<stdio.h>
#include<math.h>
#include<string.h>
struct benhnhan{
	char Ma[50];
	char HoTen[12];
	long Age;
	char DC[50];
	long SDT;
	char LoaiBenh[50];
};
void nhapin (int n , benhnhan A[100]);
void sapxep (int n , benhnhan A[100]);//xem lai
void tim (int n , benhnhan A[100],char x[12]);
void thongke (int n , benhnhan A[100], char benh[12]);
int main (){
	int n;
	benhnhan A[100];
	char benh[12];
	char x[12];
	printf("nhap n benh nhan: ");
	scanf ("%d",&n);
	printf("nhap dia chi cua x la: ");
	fflush(stdin);
	gets(x);
	printf("nhap loai benh can thong ke la: ");
	fflush(stdin);
	gets(benh);
	nhapin (n,A);
	sapxep (n,A);
	tim (n,A,x);
	thongke (n,A,benh);
}
void nhapin (int n , benhnhan A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("nhap ma benh nhan thu %d la: ",i);
		fflush(stdin);
		gets (A[i].Ma);
		printf("nhap ho ten benh nhan thu %d la: ",i);
		fflush(stdin);
		gets (A[i].HoTen);
		printf("nhap tuoi benh nhan thu %d la: ",i);
		fflush(stdin);
		scanf ("%li",&A[i].Age);
		printf("nhap dia chi benh nhan thu %d la: ",i);
		fflush(stdin);
		gets (A[i].DC);
		printf("nhap so dien thoai benh nhan thu %d la: ",i);
		fflush(stdin);
		scanf ("%li",&A[i].SDT);
		printf("nhap loai benh benh nhan thu %d la: ",i);
		fflush(stdin);
		gets (A[i].LoaiBenh);	
	}
		printf("\n %5s %10s %20s %16s %16s %15s %15s ","STT","Ma","Ho Ten","Tuoi","Dia chi","SDT","loai benh");
	for (i=1 ; i<=n ; i++){
			printf("\n %5d %10s %20s %16li %16s %15li %15s",i,A[i].Ma,A[i].HoTen,A[i].Age,A[i].DC, A[i].SDT, A[i].LoaiBenh);
	}
}
//sap xep bn theo do tuoi tang dan
void sapxep (int n , benhnhan A[100]){
	int i,j;
	for (i=1; i<=n ; i++){
		for (j=i+1; j<=n ; j++){
			if(A[i].Age>A[j].Age){
				 benhnhan stem=A[i];
				A[i]=A[j];
				A[j]=stem;
			}
		}
	}
	printf ("\nsap xep benh nhan tang dan theo do tuoi la: ");
			printf("\n %5s %10s %20s %16s %16s %15s %15s ","STT","Ma","Ho Ten","Tuoi","Dia chi","SDT","loai benh");
    for (i=1 ; i<=n ; i++){
    		printf("\n %5d %10s %20s %16li %16s %15li %15s",i,A[i].Ma,A[i].HoTen,A[i].Age,A[i].DC, A[i].SDT, A[i].LoaiBenh);
	}
}
//tim benh nhan o dia chi x
void tim (int n , benhnhan A[100],char x[12]){
		printf("\n nhung benh nhan o dia chi x la: ");
		printf("\n %5s %10s %20s %16s %16s %15s %15s ","STT","Ma","Ho Ten","Tuoi","Dia chi","SDT","loai benh");
	int i;
	int dem=0;
	int luui;
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].DC,x)==0){
			dem++;
				printf("\n %5d %10s %20s %16li %16s %15li %15s",i,A[i].Ma,A[i].HoTen,A[i].Age,A[i].DC, A[i].SDT, A[i].LoaiBenh);
		}
	}
	if (dem==0){
		printf("\n khong co benh nhan nao o dia chi x");
	}
}
//thong ke benh nhan theo loai benh
void thongke (int n , benhnhan A[100], char benh[12]){
		printf("\n nhung benh nhan thuoc loai benh: %5s ",benh);
		printf("\n %5s %10s %20s %16s %16s %15s %15s ","STT","Ma","Ho Ten","Tuoi","Dia chi","SDT","loai benh");
	int i,d=0;
	int luu=i;
	for (i=1 ; i<=n ; i++){
		if (strcmp(A[i].LoaiBenh,benh)==0){
			d++;
			printf("\n %5d %10s %20s %16li %16s %15li %15s",i,A[i].Ma,A[i].HoTen,A[i].Age,A[i].DC, A[i].SDT, A[i].LoaiBenh);
		}
	}
	if (d==0){
		printf("\n khong co benh nhan nao thuoc loai benh %10s",benh);
	}
}












