#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	int n,i;
	int a[n];
	scanf("%d",&n);
	int *p=a;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
	for (i=0;i<n;i++){
		printf("\n%d\t\n",(a+i));
	}
	for (p=&a[0];p<=a+n-1;p++){
		printf("%d\t",*p);
	}
}

