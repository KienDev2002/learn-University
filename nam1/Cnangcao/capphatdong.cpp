#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	printf("n: ");
	scanf("%d",&n);
	float *a = (float *)malloc(n*sizeof(float));// cap phat thuong dung
	for (int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%f",a+i);
	}
	for (int i=0;i<n;i++){
		printf("%.2f\t",*(a+i));
	}
	
	
//	float *a = (float *)calloc(n,sizeof(float));// cap phat nay khi khong dien thi tra ve 0


//	int x;
//	printf("\nnhap luong mang can mo rong them la: ");
//	scanf("%d",&x);

//	realloc(a,x);// tang x o nho cho con tro

	a = (float *)realloc(a,(n+1)*sizeof(float));// tang them 1 o nho cho con tro
	for (int i=0;i<n+1;i++){
		printf("\na[%d]=",i);
		scanf("%f",a+i);
	}
		for (int i=0;i<n+1;i++){
		printf("%.2f\t",*(a+i));
	}
	free(a);
}

