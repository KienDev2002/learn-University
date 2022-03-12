//De thi thu so 2 - Bai 1
#include<stdio.h>
#include<math.h>
void nhapin(int n, float A[100]);
float tinh(int n, float A[100], float x0);
void in(int n, int m, float A[100], float B[100]);

int main(){
	int n, m;
	float A[100], B[100], x0;
	printf("(Px) Nhap so mu n: "); scanf("%d",&n);
	nhapin(n,A);
	printf("\n(Qx) Nhap so mu m: "); scanf("%d",&m);
	nhapin(m,B);
	printf("\nNhap x0: "); scanf("%f",&x0);
	printf("P(x0) + Q(x0) = %.2f",tinh(n,A,x0)+tinh(m,B,x0));
	in(n,m,A,B);
	return 0;
}
//1
void nhapin(int n, float A[100]){
	int i;
	for(i=0;i<=n;i++){
		printf("Nhap he so thu %d: ",i); scanf("%f",&A[i]);
	}
	printf("Day vua nhap la: ");
	for(i=0;i<=n;i++) printf("%6.2f",A[i]);
	printf("\n");
}
//2
float tinh(int n, float A[100], float x0){
	int i;
	float S=A[0];
	for(i=1;i<=n;i++) S=S+A[i]*pow(x0,i);
	return S;
}
//3
void in(int n, int m, float A[100], float B[100]){
	int i;
	float C[100];
	C[0]=0;
	for(i=1;i<=n+1;i++) C[i]=A[i-1];
	printf("\nHe so x.P(x) + Q(x) la: ");
	if(n+1>=m){
		for(i=0;i<=m;i++) printf("%6.2f",C[i]+B[i]);
		for(i=m+1;i<=n+1;i++) printf("%6.2f",C[i]);
	}
	else{
	    for(i=0;i<=n+1;i++) printf("%6.2f",C[i]+B[i]);
		for(i=n+2;i<=m;i++) printf("%6.2f",B[i]);		
	}
}


