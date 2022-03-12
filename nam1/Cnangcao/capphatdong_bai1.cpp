#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int nhap (float **a , int *n){
	*a = (float*)malloc((*n)*sizeof(float));
	printf("\nnhap n=");
	scanf("%d",&(*n));
	for (int i=0;i<(*n);i++){
		printf("a[%d]=",i);
		scanf("%f",&(*a)[i]);
	}
	return *n;
}
void xuat (int n , float *a){
	for(int i=0;i<n;i++){
		printf("%.2f\t",a[i]);
	}
	printf("\n");
}
float MaxDuong(int n , float *a , float *max){
	int dem=0;
	for (int i=0;i<n;i++){
		if (a[i]>0){
			*max=a[i];
			dem++;
			break;
		}
	}
	for (int i=0;i<n;i++){
		if ( a[i]>0 && (*max)<a[i] ){
			*max=a[i];
		}
	}
	if (dem==0){
		return 0;
	}else{
		return *max;
	}
}
int Fibo(int n , float *a){
	for(int i=2;i<n;i++){
		if (a[i]!=a[i-1]+a[i-2]){
			return 0;
		}
	}
	return 1;
}
void Menu (int n , float *a , float max, int x){
	do {
		printf(" Nhap chon:\n 1.Nhap day\n 2.Xuat day\n 3.Tim max\n 4.day Fibo\n 5. EXIT\n");
		scanf("%d",&x);
		if (x<0||x>5){
		printf(" Vui long nhap lai chon:\n 1.Nhap day\n 2.Xuat day\n 3.Tim max\n 4.day Fibo\n 5. EXIT\n");
		scanf("%d",&x);
		}else if (x==1){
		printf("co %d phan tu\n",nhap(&a,&n));
		}else if (x==2){
			xuat(n,a);
		}else if (x==3){
		printf("\nGTLN la: %.2f\n",MaxDuong(n,a,&max));
		}else if(x==4){
			if ((Fibo(n,a)==0)){
				printf("\n Day khong phai la day Fibo\n");
			}else{
				printf("\n La day Fibo\n");
			}
		}else{
			printf("EXIT\n");
			exit(0);
		}
	}while (x>0&&x<5);
}
int main(){
	int n,x;
	float *a,max;
	Menu(n,a,max,x);
	return 0;
}

