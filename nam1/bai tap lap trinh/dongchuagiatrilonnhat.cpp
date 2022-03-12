#include<stdio.h>
#include<conio.h>
using namespace std;
void nhap(int a[][50], int &n,int &m)
{
 printf("nhap so dong:");
 scanf("%d",&n);
 printf("nhap so cot:");
 scanf("%d",&m);
 for(int i=0;i<n;i++)
  for(int j=0;j<m;j++)
    {
      printf("phan tu thu a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
}
void xuat(int a[][50], int n, int m)
{
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<m;j++)
     {
      printf("%4d",a[i][j]);
 }
     printf("\n");
  }
}
void DongChuaGiaTriLonNhat(int a[][50],int n, int m)
{
 int dong=0;
 int ln=a[0][0];
 for(int i=0;i<n;i++)
  {
   for(int j=0;j<m;j++)
    {
     if(a[i][j]>ln)
   {
    ln=a[i][j]; 
 dong=i;
   } 
    }
  }
  
  printf("\n Dong Chua Gia Tri Lon Nhat La: %d",dong);
}

int main()
{
 int a[50][50],n,m;
 nhap(a,n,m);
 xuat(a,n,m);
 
 DongChuaGiaTriLonNhat(a,n,m);
 return 0;
}
