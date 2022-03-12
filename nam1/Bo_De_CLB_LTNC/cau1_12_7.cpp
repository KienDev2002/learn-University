#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
//  1 1 2 3 5 8
long fibo (int n){
	if (n<=2){
		return 1;
	}else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int n;
	do{
	printf("\nNhap n:");
	scanf("%d",&n);	
	}while (n<0||n>100);
	printf("So Fibonacci thu %d: %li",n, fibo(n));
}

