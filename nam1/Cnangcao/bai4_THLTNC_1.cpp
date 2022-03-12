#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapin (float *a , int n){
	float *p=a;
	int i=0;
	for (p=&a[0];p<&a[n];p++){
		printf("a[%d]= ",i);
		scanf("%f",p);
		i++;
	}
	for (p=a;p<a+n;p++){
		printf("%0.2f\t",*p);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	float a[100];
	nhapin(a,n);
}

