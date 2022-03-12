#include <stdio.h>
struct hcn{
 	float a;
 	float b;
 };
void Nhap(hcn k[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap hcn thu %d: ",i+1);
		scanf("%f%f",&k[i].a,&k[i].b);
	}
}
float Stb(hcn k[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s=s+k[i].a*k[i].b;
	}
	return s/n;
}
int maxhcn(hcn k[],int n)
{
	int max=k[0].a*k[0].b,kt;
	for(int i=1;i<n;i++)
	{
		if(max<k[i].a*k[i].b)
			max=k[i].a*k[i].b;
			kt=i;
	}
	return kt+1;
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	hcn k[n];
	printf("Nhap kich thuoc cac hcn: ");
	Nhap(k,n);
	printf("\nDien tich tb cua cac hcn la: %.2f",Stb(k,n));
	printf("\nMot hinh chu nhat co dien tich max la hcn thu %d",maxhcn(k,n));
}

