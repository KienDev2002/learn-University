#include<stdio.h>
long mu (int n, int x){
	if (n==0){
		return 1;
	}else{
		return (x*mu(n-1,x));
	}
}
int main(){
	int n,x;
	scanf("%d%d",&x,&n);
	printf("%li",mu(n,x));
}
