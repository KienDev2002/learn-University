#include<stdio.h>
#include<math.h>

int main(){
	int n,i;
	float x,y;
	printf("n: ");
	scanf("%d",&n);
	printf("x: ");
	scanf("%f",&x);
	printf("y: ");
	scanf("%f",&y);
	float S= x/(pow(y,2)+1);
	float tu=x;
	for (i=1;i<=n;i++){
		tu=tu*(x+i);
		S=S+((tu)/(pow(y,2)+1));
	}
	printf("\n%0.2f",S);
}
