#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
double tinhtong (int n , float *a){
	if (n<0) return 0;
	return a[n-1] + tinhtong(n-1,a);
}
int main(){
	int n;
	scanf("%d",&n);
	float *a = (float*)malloc(n*sizeof(float));
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
	printf("\nTong mang : %.2lf",tinhtong(n,a));
}

