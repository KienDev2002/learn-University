#include<stdio.h>
#include<math.h>
int main(){
	int kq,last,n;
	printf("\n nhap chu so : ");scanf("%d",&n);
	kq=n%10;
	n/=10;
	while (n>0){
		last =n%10;
		n/=10;
		kq=kq*10+last;
	}
	printf("%d",kq);
}
