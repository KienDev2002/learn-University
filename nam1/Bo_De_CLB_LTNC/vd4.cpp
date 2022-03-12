#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void docfile(FILE *f,int *n,double **a)
{
	fscanf(f,"%d",n);
	if((*a=(double*)malloc((*n+1)*sizeof(double)))==NULL)
	{
		printf("Khong du bo nho");
		exit(0);
	}
	for(int i=0;i<=*n;i++)
	{
		fscanf(f,"%lf",&(*a)[i]);
	}
}
void xuatfile(FILE *f,int n,double *a)
{
	fprintf(f," + %.2lfx^%d",a[0],0);
	for(int i=1;i<=n;i++)
	{
		fprintf(f," + %.2lfx^%d",a[i],i);
	}
}
void daoham(int n,double *a,double **c)
{
	if((*c=(double*)malloc(n*sizeof(double)))==NULL)
	{
		printf("Khong du bo nho");
		exit(0);
	}
	for(int i=1;i<=n;i++)
	{
		*(c)[i-1]=a[i]*(i-1);
	}
	
}
void tichdathuc(int n,int m,double *a,double *b,double **tich)
{
	int max=m>n?m:n,dem=0;
	if((*tich=(double*)malloc((max+1)*sizeof(double)))==NULL)
	{
		printf("Khong du bo nho");
		exit(0);
	}
	for(int i=0;i<=max;i++)
		tich[i]=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			double tam=a[i]*b[j];
			*(tich)[i+j]+=tam;
		}
	}
}
int main()
{
	int n,m;
	double *a,*b,*c,*d;
	FILE *fi,*fo;
	fi=fopen("dathuc72.txt","r");
	if(fi==NULL)
	{
		printf("Khong tim thay tep input");
		exit(0);
	}
	fo=fopen("dathuc.txt","w");
	docfile(fi,&n,&a);
	xuatfile(fo,n,a);
	printf("\nDa thuc vua doc tu file: ");
	xuatfile(stdout,n,a);
//	daoham(n,a,&c);
//	printf("\nDao ham cua A(x): \n");
//	xuatfile(stdout,n-1,c);
	printf("\nNhap bac da thuc B(x): ");
	scanf("%d",&m);
	if((b=(double*)malloc((m+1)*sizeof(double)))==NULL)
	{
		printf("Khong du bo nho");
		exit(0);
	}
	for(int i=0;i<=m;i++)
	{
		printf("\nNhap B[%d]= ",i);
		scanf("%lf",&b[i]);
	}
	tichdathuc(m,n,a,b,&d);printf("sai");
	printf("\nDa thuc tich: ");
	xuatfile(stdout,n,d);
	int	fcloseall(void);
	free(a);
	free(b);
	free(c);
	free(d);
	return 0;
}
