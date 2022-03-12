#include<stdio.h>
#include<math.h>
#include<string.h>
void chuyen (int n  , int a[]){
	int i,dem=0;;
	for (i=1;n;i++){
		a[i]=n%2;
		n/=2;
		dem++;
	}
	for (i=dem;i>0;i--){
		printf("%d",a[i]);
	}
}
int main(){
	int n;
	printf("n: ");
	scanf("%d",&n);
	int a[1000];
	chuyen(n,a);
}

