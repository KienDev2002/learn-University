#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>// khai bao INT_MIN= so nho nhat kieu min
void nhapmang (int *a , int n , int i=0){
	if (i==n){
		return ;
	}else{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		nhapmang(a,n,i+1);
	}
}
void xuatmang (int *a , int n , int i=0){
	if (i==n) return ;
	printf("%d\t",a[i]);
	xuatmang(a,n,i+1);
}
int tinhtong (int *a , int n ,  int i=0 , int tong=0){
	if (i==n) return tong;
	return tinhtong(a,n,i+1,a[i]+tong);
}
int timmin(int *a , int n , int i=0 , int min=INT_MAX){
	if (i==n) return min;
	return timmin(a,n,i+1,a[i]<min?a[i]:min);
}
int timmax (int *a , int n , int i=0 , int max = INT_MIN){
	if(i==n) return max;
	return timmax(a,n,i+1,a[i]>max?a[i]:max);
}
int demsochan (int *a , int n , int i=0 , int dem=0){
	if (i==n) return dem;
	return demsochan(a,n,i+1,a[i]%2==0?dem+1:dem);
}
void swap (int *a , int *b){
	int stemp =*a;
	*a=*b;
	*b=stemp;
}
void sapxeptang ( int *a , int n , int i=0){
	if (i==n-1) return ;
	for (int j=i+1;j<n;j++){
		if (a[i]>a[j]){
			swap(&a[i],&a[j]);
		}
	}
	sapxeptang(a,n,i+1);
}
void sapxepgiam ( int *a , int n , int i=0){
	if (i==n-1) return ;
	for (int j=i+1;j<n;j++){
		if (a[i]<a[j]){
			swap(&a[i],&a[j]);
		}
	}
	sapxepgiam(a,n,i+1);
}
int main(){
	int n;
	int *a=new int [n];
	printf("n: ");
	scanf("%d",&n);
	nhapmang(a,n);
	xuatmang(a,n);
	printf("\nS= %d",tinhtong(a,n));
	printf("\nGTNN= %d ",timmin(a,n));
	printf("\nGTLN= %d ",timmax(a,n));
	printf("\nco %d so chan",demsochan(a,n));
	sapxeptang(a,n);
	printf("\n day so sau khi sap xep tang la: ");
	xuatmang(a,n);
	sapxepgiam(a,n);
	printf("\n day so sau khi sap xep giam la: ");
	xuatmang(a,n);
}

