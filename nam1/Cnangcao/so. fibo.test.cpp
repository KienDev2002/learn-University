#include<stdio.h>
#include<math.h>
void sofibo (int n){
	int a=0,b=1,c;
	for (int i=0;i<n;i++){
		if (i<2){
			c=i;
		}else{
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d\t",c);
	}
	
}
int main(){
	int n=-1;
	while (n<0){
	printf("nhap n: ");
	scanf("%d",&n);
	}
	sofibo(n);
}
