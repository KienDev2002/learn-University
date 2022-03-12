#include<stdio.h>
#include<math.h>
void nhapin (int m , int n , int A[100][100]){
	int i,j;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("A[%d][%d]= ",i,j);
			scanf("%d", &A[i][j]);
		}
	}
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
long tichhang (int m , int n , int A[100][100]){
 	int i,j;
 	int tich=1;
 	for (i=2;i<=m;i++){
 		for (j=1;j<=n;j++){
 			if (i%2==0){
 				tich=tich*A[i][j];
			 }
		 }
	 }
	 return tich;
 }
 void tichmax (int m , int n , int A[100][100]){
 	int i,j;
 	int dem=1,d=0;
 	int c[100];
 	for (i=2;i<=m;i++){
 		 c[dem]=1;
 		for (j=1;j<=n;j++){
 			c[dem]=c[dem]*A[i][j];
		 }
		 dem++;
		 i++;
	 }
	int max=c[1];
	for (i=1;i<dem;i++){
		if (c[i]>max){
			max=c[i];
		}
	}
	printf("\n GTLN cua hang chan la: %d",max);
	for (i=1;i<dem;i++){
		if (max==c[i]){
			d++;
			printf("\n hang thu %d co GTLN",2*i);
		}
	}
	printf("\nco %d GTLN",d);
 }

int main(){
	int m,n;
	int A[100][100];
	scanf("%d",&m);
	scanf("%d",&n);
	nhapin (m,n,A);
	printf("%li",tichhang(m,n,A));
	tichmax (m,n,A);
}
