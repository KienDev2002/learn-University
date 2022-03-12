#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	long GT=1;
	printf ("nhap n=");
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++){
		GT=GT*i;
	}
	printf ("%d!=%li",n,GT);
}
