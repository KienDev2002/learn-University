#include<stdio.h>
#include<math.h>
void GTLN (int n , int A[100]);
void TBC (int n , int A[100]);
void tong (int n , int A[100]);
void demsoptu (int n , int A[100]);
int main (){
	int n;
	int A[100];
	printf ("nhap n=");
	scanf("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf ("nhap A[%d]=",i);
		scanf ("%d",&A[i]);
	}
	GTLN (n,A);
	TBC (n,A);
	tong (n,A);
	demsoptu (n,A);
}
void GTLN (int n , int A[100]){
	int max = A[1];
	for (int i=1 ; i<=n ; i++){
		if (A[i]>=max){
			max=A[i];
		}
	}
	if (max%5==0){
		printf ("%d la GTLN chia het cho 5",max);
	}else {
		printf ("%d la GTLN khong chia het cho 5",max);
	}
}
void TBC (int n , int A[100]){
	int i;
	printf ("\nTBC=");
	int dem=0;
	float S=0;
	for (i=1 ; i<=n ; i++){
		if (A[i]<0&&A[i]%2==0){
			S=S+A[i];
			dem++;
		}
	}
	printf ("%0.2f",float (S/dem));
	if (S/dem>4){
		printf ("gia tri TBC lon hon 4");
	}else{
		printf ("gia tri TBC khong lon hon 4");
	}
}
void tong (int n , int A[100]){
	int i;
	int S1=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i]%7==0)||(A[i]%8==0)){
			S1=S1+A[i];
		}
	}
	if (S1%7==0){
		printf ("t\nong cac ptu chia cho 7 hoac 8 la: %d va chia het cho 7 ",S1);
	}else{
		printf ("\ntong cac ptu chia cho 7 hoac 8 la: %d va khong chia het cho 7 ",S1);
	}
}
void demsoptu (int n , int A[100]){
	int i;
	int d=0;
	for (i=1 ; i<=n ; i++){
		if ((A[i]%5==1)||(A[i]%5==2)){
			d++;
		}
	}
	if (d%4==0){
		printf("\nco %d ptu chia cho 5 du 1 va du 2 , so ptu chia het cho 4",d);
	}else{
		printf("\nco %d ptu chia cho 5 du 1 va du 2 , so ptu khong chia het cho 4",d);
	}
}












