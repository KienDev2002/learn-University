#include<stdio.h>
#include<string.h>

int main(){
	char name[50];
	printf("nhap ten: ");
	gets(name);// nhap giong scanf
	printf("%s",name);
	char name_my[]="kien";
	printf("%s\t\n",name_my);// in ra
	puts(name_my);// xuat ki tu trong mang
	// khong the vua khai bao chuoi sau do gan ngay 
	// vay nen cta dung lenh copy chuoi do vao mang ki tu
	char his_name[50];// khai bao chuoi
	strcpy(his_name,"\nngo kien");// copy ngo kien vao chuoi
	puts(his_name);// in chuoi mang do ra
	
}
