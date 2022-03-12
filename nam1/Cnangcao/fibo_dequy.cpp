#include<stdio.h>
//long fibo (int n){
//	long n1=0,n2=1,n3,i=1;
//	while(i<=n){
//		n3=n1+n2;
//		n1=n2;
//		n2=n3;
//		i++;
//	}
//	return n3;
//}
long fibo (int n){
	if (n==0||n==1){
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("So Fibonacci thu %d la: %d", n, fibo(n));
}
