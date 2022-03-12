#include<stdio.h>
#include<math.h>
#include<string.h>
void indaydiem (int n ,float x[100], float y[100]);
int main(){
	int i,n;
	float x[100],y[100];
	printf("nhap so diem n= ");
	scanf("%d",&n);
	printf("\nnhap toa do cac diem\n ");
	for (i=1 ; i<=n ; i++){
		printf("x[%d]=",i);
		scanf("%f",&x[i]);
		printf("y[%d]=",i);
		scanf("%f",&y[i]);
	}
	indaydiem(n,x,y);
}
void indaydiem (int n ,float x[100], float y[100]){
	int i;
	for (i=1 ; i<=n-1 ; i++){
		printf("(%.2f , %.2f), ",x[i],y[i]);
	}
		printf("(%.2f , %.2f). ",x[n],y[n]);
}



