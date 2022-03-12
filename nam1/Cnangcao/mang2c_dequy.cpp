#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 100
#include<limits.h>
void nhapmang( int *a , int m , int n , int i=0, int j=0){
	int *p=a;
	if (i==m*n) return ;
	printf("nhap a[%d][%d]=",i/n,i%n);
	scanf("%d",p+i*n+j);
	nhapmang(a,m,n,i+1,j+1);
}
void xuatmang (int *a , int m , int n, int i=0 , int j=0){
	int *p=a;
	if (i==m*n) return ;
	if (i%n==0){
		printf("\n");
	}
	printf("%d\t",*(p+i*n+j));
	xuatmang(a,m,n,i+1,j+1);
}
int tinhtong (int *a , int m , int n , int i=0 , int j =0, int tong=0){
	int *p=a;
	if (i==n*m) return tong;
	return tinhtong(a,m,n,i+1,j+1, tong + (*(p+i*n+j)));
}
int timmin (int *a , int m , int n , int i=0 , int j=0, int min = INT_MAX){
	int *p=a;
	if (i==n*m) return min;
	return timmin(a,m,n,i+1,j+1,*(p+i*n+j)<min?*(p+i*n+j):min);
}
int demsochan (int *a , int m  , int n , int i=0 , int j=0 , int dem=0){
	int *p=a;
	if(i==n*m) return dem;
	return demsochan(a,m,n,i+1,j+1,(*(p+i*n+j))%2==0?dem+1:dem);
}
void swap (int *a , int *b){
	int stemp=*a;
	*a=*b;
	*b=stemp;
}
void sapxeptang (int *a, int m , int n , int i=0, int j=0){
	if (i==m*n-1) return ;
	for (int k=j+1;k<n;k++){
		if (*(a+i*n+j)>*(a+i*n+k)){
			swap(a+i*n+j,a+i*n+k);
		}
	}
	sapxeptang(a,m,n,i+1,j+1);
}
int main(){
	int m,n,a[size][size];
	printf("nhap m: ");
	scanf("%d",&m);
	printf("nhap n: ");
	scanf("%d",&n);
	nhapmang((int*)a,m,n);
	xuatmang((int*)a,m,n);
	printf("\n S=%d",tinhtong((int*)a,m,n));
	printf("\nGTNN= %d ",timmin((int*)a,m,n));
	printf("\nco %d so chan",demsochan((int*)a,m,n));
	sapxeptang((int*)a,m,n);
	printf("\n day so sau khi sap xep tang la: ");
	xuatmang((int*)a,m,n);
}

