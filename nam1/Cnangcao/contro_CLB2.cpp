#include<stdio.h>
#include<math.h>
#include<string.h>
//void tinhtong(int *a , int *b, int *S1 , int *S2){
//	*S1=*a+*b;
//	*S2=(*a)-(*b);
//}
void tinhtong(int &a , int &b, int &S1 , int &S2){
	S1=a+b;
	S2=a-b;
}
int main(){
	int a,b,S1,S2;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	tinhtong(a,b,S1,S2);
	printf("%d",S1);
	printf("\n%d",S2);
}

