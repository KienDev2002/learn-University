#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapin (int n , int *a){
	int i;
	int *p=a;
	i=0;
	for (p=&a[0];p<&a[n];p++){
		printf("nhap a[%d]=",i);
		scanf("%d",p);
		i++;
	}
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
	}
}
int main(){
	int n;
	int a[100];
	printf("nhap n= ");
	scanf("%d",&n);
	nhapin(n,a);
}

