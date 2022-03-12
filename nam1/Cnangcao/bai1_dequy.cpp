#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 100
int tinhtong (int n){
	if (n<1){
		return 0;
	}else{
	return n+tinhtong(n-1);
	}
}
int mu (int n , int x){
	if (n<1){
		return 1;
	}else{
		return x*mu(n-1,x);
	}
}
float tinhcan (int n){
	if (n<1){
		return 0;
	}else{
		return sqrt(n+tinhcan(n-1));
	}
}
float sofibo (int n){
	if (n==0||n==1){
		return 1;
	}else{
		return sofibo(n-1)+sofibo(n-2);
	}
}
float maxn(int n , int a[]){
	if (n==1){
		return a[0];
	}else{
	//c1
//		if (maxn(n-1,a)>a[n-1]){
//			return maxn(n-1,a);
//		}else{
//			return a[n-1];
//	}	
	//c2
	int max=maxn(n-1,a);
	if (max>a[n-1]){
		return max;
	}else{
		return a[n-1];
		}
	}
}
int main(){
	int n,x;
	printf("nhap n: ");
	scanf("%d",&n);
	printf("tong = %d",tinhtong(n));
	printf("\nnhap x: ");
	scanf("%d",&x);
	printf("mu = %d",mu(n,x));
	printf("\ncan = %0.2f",tinhcan(n));
	printf("\nsofibo = %0.2f",sofibo(n));
	int a[size];
	for (int i=0;i<n;i++){
		printf("\nnhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nmax = %0.2f",maxn(n,a));
}

