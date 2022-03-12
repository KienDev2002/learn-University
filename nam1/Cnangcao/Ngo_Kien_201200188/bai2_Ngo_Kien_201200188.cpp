#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 100
struct HCN {
	float cd;
	float cr;
};
void nhap ( int n , HCN a[]){
	int i;
	for (i=0;i<n;i++){
		printf("nhap cdai thu %d ",i+1);
		scanf("%f",&a[i].cd);
		printf("nhap crong thu %d ",i+1);
		scanf("%f",&a[i].cr);
	}
}
float dientichTB(HCN a[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s=s+a[i].cd*a[i].cr;
	}
	return s/n;
}
int Smax(HCN a[],int n)
{
	int max=a[0].cd*a[0].cr,luui;
	for(int i=1;i<n;i++){
		if(max<a[i].cd*a[i].cr)
			max=a[i].cd*a[i].cr;
	}
	for (int i=0;i<n;i++){
		if (max==a[i].cd*a[i].cr){
				printf("\nMot hinh chu nhat co dien tich max la HCN thu %d",i+1);
		}
	}
}
int main(){
	int n;
	HCN a[size];
	printf("n: ");
	scanf("%d",&n);
	nhap(n,a);
	printf("\nDien tich tb cua cac HCN la: %0.2f",dientichTB(a,n));
	Smax(a,n);
}

