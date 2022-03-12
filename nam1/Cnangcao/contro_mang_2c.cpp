#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
// +++++ nhap cach 1
	/*
	float a[2][3];// dia chi kieu float
	float *pa;// con tro kieu float
	pa=(float*)a;// ep kieu de a thanh mang 1 chieu
	for (int i=0;i<6;i++){
			scanf("%f",(float*)a+i);// cach 1
	}
	for (int i=0;i<6;i++){
		scanf("%f",pa+i);// cach 2
	}
	*/
//	+++++ nhap cach 2;
	/*
	float a[50][50];
	int m,n,i,j;
	printf("nhap m va n : ");
	scanf("%d%d",&m,&n);
	for (i=1;i<=m;i++){
		for (j=1;j<=n;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%f",(float*)a+i*50+j);
		}
	}
	*/
// +++ dung bien trung gian la: x
	float a[3][2],b[2][4],c[3][4],x;
	int i,j,k;
		for (i=0;i<3;i++){
			for (j=0;j<2;j++){
				printf("a[%d][%d]=",i,j);
				scanf("%f",&x);
				x=a[i][j];
		}
	}
}




























}

