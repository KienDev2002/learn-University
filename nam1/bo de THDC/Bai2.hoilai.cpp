//De thi thu so 1 - Bai 2
#include<stdio.h>
#include<math.h>
void nhap(int m, int n, float A[100][100]);
void tich(int m ,int n, float A[100][100]);
void tichmax(int m ,int n, float A[100][100]);

int main(){
	int m, n;
	float A[100][100];
	printf("Nhap m hang va n cot: "); scanf("%d %d",&m,&n);
	nhap(m,n,A);
	tich(m,n,A);
	tichmax(m,n,A);
	return 0;
}
//1
void nhap(int m, int n, float A[100][100]){
	int i,j;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("Nhap A[%d][%d]: ",i,j); scanf("%f",&A[i][j]);
		}
	}
	printf("\nMa tran vua nhap la: \n");
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%6.1f",A[i][j]);
		}
		printf("\n");
	}
}
//2
void tich(int m ,int n, float A[100][100]){
	int i,j,kt=0;
	float S=1;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(i%2==0){
			    kt=1;
			    S=S*A[i][j];
		    }
		}
	}
	if(kt==0) printf("\nMa tran khong ton tai hang chan");
	if(kt==1) printf("\nTich cac phan tu tren hang chan la: %.2f",S);
}
//3
void tichmax(int m ,int n, float A[100][100]){
	int i,j,k=0,kt=0, dem=0, count=0;
	float S[100];
	for(i=1;i<=m;i++){
		if(i%2==0){
			kt=1;
			k+=1;
		    count++;
		    S[k]=1;
		}
		for(j=1;j<=n;j++){
			if(i%2==0) S[k]*=A[i][j];
		}
	}
	float max=S[1];
	for(i=1;i<=count;i++){
		if(S[i]>max) max=S[i];
	}
	for(i=1;i<=count;i++){
		if(S[i]==max) dem++;
	}
	if(kt==1){
		printf("\nCo %d gia tri tich hang chan lon nhat la: %.2f",dem,max);
	    printf("\nVi tri cac hang do la: ");
	    for(i=1;i<=count;i++){
	    	if(S[i]==max) printf("%d   ",i*2);
		}
	}
	if(kt==0) printf("\nMa tran khong ton tai hang chan");
}
