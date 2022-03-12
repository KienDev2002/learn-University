#include<stdio.h>
#include<math.h>
int tongchan (int m , int A[100][100] , int n){
	int i,j;
	int tong =0;
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (i%2==0&&j%2!=0){
				tong=tong+A[i][j];
			}
		}
	}
	return tong;
}
void GTLN (int m , int A[100][100] , int n){
	int i,j,dem=0;
	int max = A[1][1];
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (max<A[i][j]){
			   max=A[i][j];
			}
		}
	}
	printf("\n%d",max);
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			if (max==A[i][j]){
				dem++;
				printf("\nA[%d][%d]",i,j);
			}
		}
	}
	printf("\n co %d GTLN",dem);
}
int main(){
	int n,m;
	int A[100][100];
	printf("nhap m hang: ");
	scanf("%d",&m);
    printf("nhap n cot: ");
	scanf("%d",&n);	
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
	printf("%d",tongchan(m,A,n));
	GTLN(m,A,n);
}
