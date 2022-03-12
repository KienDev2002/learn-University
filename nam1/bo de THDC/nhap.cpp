
#include <stdio.h>
#include <string.h>
struct bacsi{
	char hoten[50];
	char chuyennganh[12];
	int tuoi;
};
void Indanhsach(int n,bacsi a[100])
{
	printf("\n");
	printf("%-5s %-30s %-10s %-5s","STT","Ho Ten","Chuyen nganh","Tuoi");
	for(int i=0;i<n;i++)
	{
		printf("%-5i %-30s %-10s %-5d",i,a[i].hoten,a[i].chuyennganh,a[i].tuoi);
		printf("\n");
	}
}
void Tinh_tuoi_tb(int n,bacsi a[100])
{
	int tb[3]={};
	int s[3]={};
	for(int i=0;i<n;i++)
	{
		if(a[i].chuyennganh=="A")
		{
			tb[0]++;
			s[0]+=a[i].tuoi;
		}
		if(a[i].chuyennganh=="B")
		{
			tb[1]++;
			s[1]+=a[i].tuoi;
		}
		if(a[i].chuyennganh=="C")
		{
			tb[2]++;
			s[2]+=a[i].tuoi;
		}
		
	}
	if(tb[0]!=0)
		printf("\nTuoi trung binh theo chuyen nganh A la: %d",(float)s[0]/tb[0]);
	else
		printf("\nTuoi trung binh theo chuyen nganh A la: %d",0);
	if(tb[1]!=0)		
		printf("\nTuoi trung binh theo chuyen nganh B la: %d",(float)s[1]/tb[1]);
	else
		printf("\nTuoi trung binh theo chuyen nganh B la: %d",0);
	if(tb[2]!=0)	
		printf("\nTuoi trung binh theo chuyen nganh C la: %d",(float)s[2]/tb[2]);
	else
		printf("\nTuoi trung binh theo chuyen nganh C la: %d",0);	
}
int main()
{
	int n;
	printf("Nhap so luong bac si: ");
	scanf("%d",&n);
	bacsi a[100];
	printf("Nhap danh sach bac si: \n");
	for(int i=0;i<n;i++)
	{
		printf("\n");
		printf("Nhap bac si thu %d: \n",i+1);
		printf("Ho ten: ");
		fflush(stdin);
		gets(a[i].hoten);
		printf("Chuyen nganh: ");
		fflush(stdin);
		gets(a[i].chuyennganh);
		printf("Tuoi: ");
		scanf("%d",&a[i].tuoi);
		printf("\nDanh sach vua nhap: ");
		Indanhsach(n,a);
	}
}
