#include<stdio.h>
#include<math.h>

int main(){
	int i,n;
	int S=0;
	printf ("nhap n=");
	scanf("%d",&n);
	for (i=1 ; i<=n ; i++){
		S=S+i;
	}
	printf ("S=%d",S);
}
