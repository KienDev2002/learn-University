#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TM{
	char M[100];
	char HT[100];
	char Q[100];
	int T,SN,B;
};
struct TM *a;
void docfile(int *n , struct TM **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TM*)malloc((*n)*sizeof(TM)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %[^\n]\n %d\n %d\n %d\n",(*a)[i].M,(*a)[i].HT,(*a)[i].Q,&(*a)[i].T,&(*a)[i].SN,&(*a)[i].B);
	}
}
void in (int n , struct TM *a){
		for (int i=0;i<n;i++){
				printf("\n %-5d %-10s %-20s %-15s %-10d %-5d %5d",i+1,a[i].M,a[i].HT,a[i].Q,a[i].T,a[i].SN,a[i].B);
	}
}
void tinhbac (int n , struct TM *a){
	for (int i=0;i<n;i++){
		if(a[i].SN>0&&a[i].SN<=5)			printf("\n Tho %s bac 3",a[i].HT);
		else if (a[i].SN>5&&a[i].SN<=10)  	printf("\n Tho %s bac 2",a[i].HT);
		else if (a[i].SN>10)   	printf("\n Tho %s bac 1",a[i].HT);
	}
}
void thongke (int n , struct TM *a){
	int b[4] = {};
	for (int i=0;i<n;i++){
		if  (a[i].SN>10)  b[0]++;		
		else if (a[i].SN>5&&a[i].SN<=10) b[1]++;
		else if(a[i].SN>0&&a[i].SN<=5)   b[2]++;
	}
	for (int i=0;i<3;i++){
		printf("\n So tho co bac %d la: %d",i+1,b[i]);
	}
}
void tim (int n , struct TM *a){
	char b[30];
	int ok =0;
	char t[30];
	printf ("\nNhap ma tho moi la: ");
	gets (b);
	printf ("\nNhap ten tho moi la: ");
	gets (t);
	printf("\nTho sau khi sua la: ");
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].M,b)==0){
		ok = 1;
		printf("\n %-5d %-10s %-20s %-15s %-10d %-5d %5d",i+1,a[i].M,t,a[i].Q,a[i].T,a[i].SN,a[i].B);
		}
	}
	if (ok ==0){
		printf("\nKhong co tho nao co ma la: %s",b);
	}
}
int main(){
	int n;
	FILE *p1 = fopen("tho.txt","r") , *p2 = fopen("output.txt","w");
	if (p1 == NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	tinhbac(n,a);
	thongke(n,a);
	tim(n,a);
	int fcloseall(void);
	free(a);
}

