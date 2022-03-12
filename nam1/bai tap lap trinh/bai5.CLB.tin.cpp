#include<stdio.h>
#include<math.h>
void nhapin (int n , int A[100]);
void TBC (int n , int A[100]);
void chinhphuong (int n , int A[100]);
void sapxep (int n, int A[100]);
int main (){
	int i,n;
	int A[100];
	printf ("nhap n so =");
	scanf ("%d",&n);
	nhapin (n,A);
	TBC (n,A);
	chinhphuong(n,A);
	sapxep (n,A);
}
void nhapin (int n , int A[100]){
	for (int i=1 ; i<=n ; i++){
	printf ("nhap A[%d]=",i);
	scanf ("%d",&A[i]);
	}
	for (int i=1 ; i<=n ; i++){
		printf ("%d\t",A[i]);
	}
}
void TBC (int n , int A[100]){
	int i;
	int S=0,dem=0;
	for (i=1 ; i<=n ; i++){
		if (A[i]%11==8){
			S=S+A[i];
			dem++;
		}
	}
	printf ("\nTBC=%d",S/dem);
}
void chinhphuong (int n , int A[100]){
	printf ("\ncac so chinh phuong la: ");
	int i;
     for (i=1 ; i<=n ; i++){
     	if (sqrt(A[i])*sqrt(A[i])==A[i]){
     		printf ("%d\t",A[i]);
		 }
	 }
}
void sapxep (int n, int A[100]){
	printf ("\n sap xep le phai , chan trai la :");
	int i,j;
	int stemp =0;
	int stem=0;
	for (i=1 ; i<=n ; i++){
			for (j=i+1 ; j<=n ; j++){
				if (A[i]%2==0&&A[j]%2==0){
					if (A[i]<A[j]){
						stemp=A[i];
						A[i]=A[j];
						A[j]=stemp;
					}
				}else {
						if (A[i]>A[j]){
						stem=A[i];
						A[i]=A[j];
						A[j]=stem;
				}
			}
		}
	}
	for (i=1 ; i<=n ; i++){
		if (A[i]%2==0){
			printf ("%d\t",A[i]);	
		}else
		 {
				printf ("%d\t",A[i]);
		}
	}
}











