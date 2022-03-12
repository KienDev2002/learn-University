#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
void docfile (FILE *&p , int &n , float *a){
	p=fopen("daysobai3.txt","r");
	if (p==NULL){
		printf("file nay chua co!");
		exit(0);
	}
	fscanf(p,"%d",&n);
	for (int i=0;i<n;i++){
		fscanf(p,"%f",a+i);
	}
	printf("- co %d so thuc la :",n);
	for (int i=0;i<n;i++){
		printf("%.2f\t",*(a+i));
	}
}
float tongday (int n , float *a , int i=0, float tong=0){
	if (i==n) return tong;
	return tongday(n,a,i+1,tong+*(a+i));
}
int demsoduong (int n , float *a , int i=0 , int dem=0){
	if (i==n) return dem;
	return demsoduong(n,a,i+1,*(a+i)>0?dem+1:dem);
}
float GTLN (int n , float *a , int i=0 , float max = INT_MIN){
	if (i==n) return max;
	return GTLN (n,a,i+1,*(a+i)>max?*(a+i):max);
}
void ghifile (FILE *&p , int &n , float *a , FILE *p1){
	p1=fopen("outday.txt","w");
	fprintf(p1,"- Co %d so thuc la:  ",n);
	for (int i=0;i<n;i++){
		fprintf(p1,"%.2f\t",*(a+i));
	}
	fprintf(p1,"\n- Tong cua day la: %.2f",tongday(n,a));
	fprintf(p1,"\n- Co %d so duong trong day",demsoduong(n,a));
	fprintf(p1,"\n- Gia tri lon nhat trong day la: %.2f",GTLN(n,a));
}
int main(){
	int n;
	FILE *p, *p1;
	float *a = (float *)malloc(n*sizeof(float));
	docfile(p,n,a);
	printf("\n- S= %.2f",tongday(n,a));
	printf("\n- co %d so duong",demsoduong(n,a));
	printf("\n- GTLN la: %.2f",GTLN(n,a));
	ghifile(p,n,a,p1);
	free(a);
}

