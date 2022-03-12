#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapin (int n , int A[100]){
	int i ;
	for (i=1 ; i<=n ; i++){
		printf ("A[%d]=",i);
		scanf ("%d",&A[i]);
	}
	for (i=1 ; i<=n ; i++){
		printf ("%d\t",A[i]);
	}
}
void locday (int n , int A[]){
	printf("\n");
	int i,right,left,dem=0;
	for (i=1;i<=n;i++){
		if (A[i]%2==0){
			printf ("%d\t",A[i]);
		}
	}
	for (i=1;i<=n;i++){
		if (A[i]%2!=0){
			printf ("%d\t",A[i]);
		}
	}
}
int main(){
    int n;
    int A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
   	locday(n,A);
}

