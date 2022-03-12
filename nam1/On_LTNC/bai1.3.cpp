#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x;
	float y;
};
struct TD *a;
void docfile(int *n , FILE *p1, struct TD **a){
	fscanf(p1,"%d\n",&(*n));
	if ((*a = (TD*)malloc((*n+1)*sizeof(TD)))==NULL){
		printf("\nKhong du bo nho!");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%f%f\n",&(*a)[i].x,&(*a)[i].y);
	}
}
void xuat (int n , struct TD *a , FILE *p2){
	printf("Co %d diem\n",n);
	fprintf(p2,"- Co %d diem\n",n);
	for (int i=0;i<n-1;i++){
		printf("(%.2f, %.2f) , ",a[i].x,a[i].y);
		fprintf(p2,"(%.2f, %.2f) , ",a[i].x,a[i].y);
	}
	printf("(%.2f, %.2f).",a[n-1].x,a[n-1].y);
	fprintf(p2,"(%.2f, %.2f).",a[n-1].x,a[n-1].y);
}
void tinh (int n , struct TD *a , FILE *p2){
	for (int i=0;i<n;i++){
		printf("\n Khoang cach cua diem thu %d den truc hoang la: %.2f",i+1,fabs(a[i].y));
		fprintf(p2,"\n Khoang cach cua diem thu %d den truc hoang la: %.2f",i+1,fabs(a[i].y));
	}
}
void timdodai (int n , struct TD *a , FILE *p2){
	float *b;
	b = (float*)malloc(n*sizeof(float));
	printf("\n Do dai lon nhat la: ");
	fprintf(p2,"\n Do dai lon nhat la: ");
	int dem=0;
	b[dem] =(sqrt (pow (a[n-1].x-a[0].x,2)+pow (a[n-1].y-a[0].y,2)));
	for (int i=1 ; i<n ; i++){
		dem++;
		b[dem]=(sqrt (pow (a[i].x-a[i-1].x,2)+pow (a[i].y-a[i-1].y,2)));
	}
	float max = b[0];
	for (int i=1;i<=dem;i++){
		if (max<b[i]){
			max=b[i];
		}
	}
	for (int i=0; i<=dem; i++){
		if (max==b[i]){
		printf("%.2f",b[i]);	
		fprintf(p2,"%.2f",b[i]);
		}
	}
}
int main(){
	int n;
	FILE *p1= fopen("intoado.txt","r"), *p2=fopen("outtoado.txt","w");
	docfile(&n,p1,&a);
	xuat(n,a,p2);
	tinh(n,a,p2);
	timdodai(n,a,p2);
	fclose(p1);
	fclose(p2);
}

