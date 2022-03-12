#include<stdio.h>
#include<math.h>
#include<string.h>
struct oto{
	char BienKiemSoat[50];
	long SoChoNgoi;
	long Sokm;
};
void nhapxuat (int n , oto A[100]);
void tbc (int n , oto A[100]);
void chaynhieu (int n , oto A[100]);
int main (){
	int n;
	oto A[100];
	char bien[12];
	printf ("nhap n oto =");
	scanf ("%d",&n);
	nhapxuat(n,A);
	tbc (n,A);
	chaynhieu(n,A);
}
void nhapxuat (int n , oto A[100]){
	int i;
	for (i=1 ; i<=n ; i++){
	printf ("Bien kiem soat cua oto thu %d la: ",i);
	fflush(stdin);
	gets (A[i].BienKiemSoat);
	printf ("So cho ngoi cua oto thu %d la:  ",i);
	fflush(stdin);
	scanf ("%li",&A[i].SoChoNgoi);
	printf ("So km cua oto thu %d la:  ",i);
	fflush(stdin);
	scanf ("%li",&A[i].Sokm);
	}
  	 printf ("danh sach oto la: ");
	 printf ("\n %5s %20s %15s %10s","STT","Bien Kiem Soat","So Cho Ngoi","So km");
    for (i=1 ; i<=n ; i++){
    	printf ("\n %5d %20s %15li %10li",i,A[i].BienKiemSoat,A[i].SoChoNgoi,A[i].Sokm);
	}
}
void tbc (int n , oto A[100]){
	int i;
	int dem =0;
	float S=0;
	for (i=1 ; i<=n ; i++){
		if (strncmp(A[i].BienKiemSoat,"29",2)==0){
			dem++;
			S=S+(A[i].SoChoNgoi);
		}
	}
	if (dem==0){
		printf("\n khong co bien xe nao dau 29");
	}else{
			printf ("\n TBC=%0.2f",S/dem);

	}
}
void chaynhieu (int n , oto A[100]){
	printf ("\n oto nho hon 16 cho chay nhieu km nhat la: ");
	int i,dem1=0,kq;
	long max;
	for (i=1 ; i<=n ; i++){
		if (A[i].SoChoNgoi < 16){
			max = A[i].Sokm ;
			kq=i;
			dem1++;
			break;
		}
	}
	for (i=1 ; i<=n ; i++){
	if ((A[i].SoChoNgoi<16)&&(A[i].Sokm>max)){
		    max = A[i].Sokm;
		    kq=i;
		}
	}
	if (dem1==0){
		printf("\n khong co xe nao!");
	}else{
		printf ("xe chaynhieu km nhat la xe so %d",kq);
	}
}



















