#include<stdio.h>
#include<math.h>
#include<conio.h>
void inmatran (int n , float a[100][100],int m );
void tinhtong (int n , float a[100][100],int m);
void GTLN (int n , float a[100][100],int m);
int main (){
	float a[100][100];
	float b[100][100];
	int m ,n;
	int i,j;
	printf ("nhap m hang=");
	scanf ("%d",&m);
	printf ("nhap n cot=");
	scanf ("%d",&n);
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			printf ("nhap ma tran a[%d][%d]=",i,j);
			scanf ("%f",&a[i][j]);
		}
	}
	inmatran (n,a,m);
	tinhtong (n,a,m);
	GTLN (n,a,m);
}
void inmatran (int n , float a[100][100],int m ){
	printf ("ma tran A=\n");
	int i;
	for (i=1 ; i<=m ; i++){
		for (int j=1 ; j<=n ; j++){
			printf ("%0.2f\t",a[i][j]);
		}
		printf ("\n");
	}
}
void tinhtong (int n , float a[100][100],int m){
	printf ("\n");
	int i,j;
	float sum =0;
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (i%2==0 && j%2!=0){
				sum = sum +a[i][j];
			}
		}
	}
	printf ("sum=%0.2f",sum);
}
void GTLN (int n , float a[100][100],int m){
	printf ("\n GTLN=");
	int i,j;
	int dem =0;
	float max=a[1][1];
	for (i=1 ; i<=m ; i++){
		for (j=1 ; j<=n ; j++){
			if (a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	printf ("%0.2f",max);
		for (i=1 ; i<=m ; i++){
				for (j=1 ; j<=n ; j++){
					if (max==a[i][j]){
						dem++;
					}
				}
		}
		printf("\nso ptu lon nhat = %d",dem);
		printf ("\n vi tri ptu lon nhat la:");
		for (i=1 ; i<=m ; i++){
			for (j=1 ; j<=n ; j++){
				if (a[i][j]==max){
					printf ("a[%d][%d]",i,j);
				}
			}
		}
}























