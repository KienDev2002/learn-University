#include<stdio.h>
#include<math.h>
#include<string.h>
struct oto{
	char BienKiemSoat[12];
	long ChoNgoi;
	long SoKM;
};
void nhap (int n , oto A[100]);
int main (){
	int n;
	oto A[100];
	printf ("nhap n oto =");
	scanf ("%d",&n);
}
void nhap (int n , oto A[100]){
	int i;
	printf ("Bien kiem soat cua oto thu %d la: ",i);
	fflush(stdin);
	gets (A[i].BienKiemSoat);
	printf ("So cho ngoi cua oto thu %d la:  ",i);
	fflush(stdin);
	scanf ("%li")
}

