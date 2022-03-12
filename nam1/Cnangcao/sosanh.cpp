#include<stdio.h>
#include<math.h>
int GTLN (int a, int b){
	int max=a>b?a:b;
	return max;
}
int main (){
	int a,b,c;
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	printf("so lon nhap trong so a , b , ,c la: %d",GTLN(GTLN(a,b),c));
}
