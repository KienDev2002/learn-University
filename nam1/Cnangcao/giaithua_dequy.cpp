#include<stdio.h>
long giaithua (int n){
	if(n==0||n==1){
		return 1;
	}else{
		return n * giaithua(n-1);
	}
}
int main(){
	int n;
    long sum=giaithua(5);
    printf("%li",sum);
}
