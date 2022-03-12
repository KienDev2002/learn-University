#include<stdio.h>
#include<math.h>
void nhapin (int m , float A[100][100], int n );
void tichchan (int m , float A[100][100],int n );
void vitri (int m , float A[100][100], int n);
int main (){
	int n,m;
	float A[100][100];
	printf ("nhap m hang=");
	scanf ("%d",&m);
	printf ("nhap n cot=");
	scanf ("%d",&n);
	nhapin (m,A,n);
	tichchan(m,A,n);
	vitri (m,A,n);
}
void nhapin (int m , float A[100][100], int n ){
	int i,j ;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("nhap A[%d][%d]=",i,j);
			scanf ("%f",&A[i][j]);
		}
	}
		printf ("ma  tran la :\n");
		for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("%0.2f\t",A[i][j]);
		}
		printf ("\n");
	}
}
void tichchan (int m , float A[100][100],int n ){
	int i,j;
	float S=1;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (i%2==0){
				S=S*A[i][j];
			}
		}
	}
	printf ("\nS=%0.2f",S);
}
void vitri (int m , float A[100][100], int n){
	int i,j,dem=1;
	float c[100];
	for(i=2;i<=m;i++){
	c[dem]=1;
	for(j=1;j<=n;j++){
		c[dem]=c[dem]*A[i][j];
	}
	dem++;
	i++;
	}
	float max=c[1];
	for (i=1;i<dem;i++){
		if (c[i]>max){
			max=c[i];
		}
	}
	printf("\ntich hang chan gia tri lon nhat cua hang chan la: %0.2f ",max);
	printf("\n hang chan co tich lon nhat la: ");
	for (i=1;i<dem; i++){
		if (max==c[i]){
			printf(" %d\t",2*i);
		}
	}
}













