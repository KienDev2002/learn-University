#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct PS{
	int tu;
	int mau;
};
struct PS *a;
void docfile (int *n , struct PS **a ,FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(PS*)malloc((*n)*sizeof(PS)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%d",&(*a)[i].tu);
		fscanf(p1,"%d\n",&(*a)[i].mau);
	}
}
void in (int n , struct PS *a){
	for (int i=0;i<n;i++){
			printf("  %d/%d\t",a[i].tu, a[i].mau);
	}
}
int UCLN (int a , int b){
	a = abs(a);
	b = abs(b);
	while (a!=b){
		if (a>b){
			a= a-b;
		}else{
			b=b-a;
		}
	}
	return a;
}
void GTLN (int n , struct PS *a){
	int luui=0;
	printf("\n Phan So lon nhat la:");
	float max = (float)a[0].tu/a[0].mau;
	for (int i=1;i<n;i++){
		if (max < (float)a[i].tu/a[i].mau){
			max = (float)a[i].tu/a[i].mau;
			luui=i;
		}
	}
	if (luui==0){
			int UC = UCLN(a[0].tu,a[0].mau);
			a[0].tu/=UC;
			a[0].mau/=UC;
			printf(" %d/%d",a[0].tu,a[0].mau);
		if (a[0].mau<0 && a[0].tu>0){
				printf("-%d/%d\t",a[0].tu,abs(a[0].mau));
		}else if(a[0].tu<0 && a[0].mau<0){
				printf("%d/%d\t",abs(a[0].tu),abs(a[0].mau));
		}else{
			printf("%d/%d\t",a[0].tu,a[0].mau);
		}
	}else{
			int UC =UCLN(a[luui].tu,a[luui].mau);
			a[luui].tu/=UC;
			a[luui].mau/=UC;
			if (a[luui].mau<0 && a[luui].tu>0){
				printf(" -%d/%d\t",a[luui].tu,abs(a[luui].mau));
		}else if(a[luui].tu<0 && a[luui].mau<0){
				printf(" %d/%d\t",abs(a[luui].tu),abs(a[luui].mau));
		}else{
			printf(" %d/%d\t",a[luui].tu,a[luui].mau);
		}
	}
}
void rutgon (int n , struct PS *a, FILE *p2){
	printf("\n Phan so sau khi rut gon la: ");
	for (int i=0;i<n;i++){
		int UC = UCLN(a[i].tu,a[i].mau);
		a[i].tu/=UC;
		a[i].mau/=UC;
		if (a[i].mau<0 && a[i].tu>0){
				printf("-%d/%d\t",a[i].tu,abs(a[i].mau));
				fprintf(p2,"%d/%d\t",abs(a[i].tu),abs(a[i].mau));
		}else if(a[i].tu<0 && a[i].mau<0){
				printf("%d/%d\t",abs(a[i].tu),abs(a[i].mau));
				fprintf(p2,"%d/%d\t",abs(a[i].tu),abs(a[i].mau));
		}else{
			printf("%d/%d\t",a[i].tu,a[i].mau);
			fprintf(p2,"%d/%d\t",a[i].tu,a[i].mau);
		}
	}
}
void tong (int n , struct PS *a){
	printf("\n");
	int tu = a[0].tu, mau = a[0].mau;
	for (int i=1;i<n;i++){
		tu = tu * a[i].mau + a[i].tu * mau;
		mau *= a[i].mau;
	}
	int UC = UCLN (tu,mau);
	tu/=UC;
	mau/=UC;
	printf(" Tong phan so la: %d/%d",tu,mau);
}
int main(){
	int n;
	FILE *p1= fopen("ps.txt","r") , *p2 = fopen ("psrutgon.txt","w");
	if (p1==0){
		printf("Chua co File");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	GTLN(n,a);
	rutgon(n,a,p2);
	tong(n,a);
	int fcloseall(void);
	free(a);
}

