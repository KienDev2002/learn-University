#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *m , int *n , float ***a , FILE *p1, FILE *p2){
	fscanf(p1,"%d%d",m,n);
	if (((*a)=(float**)calloc(*m,sizeof(float*)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
	}
	for (int i=0;i<*m;i++){
	if (((*a)[i]=(float*)calloc(*n,sizeof(float)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%f",&(*a)[i][j]);
		}
	}
	printf("ma tran co %d x %d la:\n",*m,*n);
	fprintf(p2,"ma tran co %d x %d la:\n",*m,*n);
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			printf("%.2f\t",(*a)[i][j]);
			fprintf(p2,"%.2f\t",(*a)[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tich (int n ,int m, float **a, FILE *p2){
	float *b=(float*)calloc(n,sizeof(float));
//	for (int i=0;i<m;i++){
//		b[i]=1;
//		for (int j=0;j<n;j++){
//			b[i]=b[i]*a[i][j];
//		}
//	}
		for (int j=0;j<n;j++){
		b[j]=1;
		for (int i=0;i<m;i++){
			b[j]=b[j]*a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		printf("\nTich cot thu %d la: %.2f",i+1,b[i]);
		fprintf(p2,"\nTich hang thu %d la: %.2f",i+1,b[i]);
	}
//	for (int j=0;j<n;j++){
//		printf("\nTich hang thu %d la: %.2f",j+1,b[j]);
//		fprintf(p2,"\nTich hang thu %d la: %.2f",j+1,b[j]);
//	}
	printf("\n- Hang co tong nho nhat la hang: ");
	fprintf(p2,"\n- Hang co tong nho nhat la hang: ");
	float *c=(float*)calloc(m,sizeof(float));
	for (int i=0;i<m;i++){
		c[i]=0;
		for (int j=0;j<n;j++){
			c[i]=c[i]+a[i][j];
		}
	}
	float min= c[0];
	for (int i=1;i<m;i++){
		if (min>c[i]){
			min=c[i];
		}
	}
	for (int i=0;i<m;i++){
		if (min==c[i]){
		  printf("%d",i+1);
		fprintf(p2,"%d",i+1);
		}
	}
}
int demptuduong (int m , int n , float **a){
	int dem=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]>0){
				dem++;
			}
		}
	}
	if (dem==0){
		return 0;
	}else{
		return dem;
	}
}
int main(){
	int n,m;
	float **a;
	FILE *p1= fopen("in1.5.txt","r"), *p2=fopen("out1.5.txt","w");
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	docfile(&m,&n,&a,p1,p2);
	tich(n,m,a,p2);
	if (demptuduong(m,n,a)==0){
		printf("\nKhong co ptu duong nao!");
		fprintf(p2,"\nKhong co ptu duong nao!");
	}else{
		printf("\n- co %d phan tu duong",demptuduong(m,n,a));
	    fprintf(p2,"\n- co %d phan tu duong",demptuduong(m,n,a));
	}
	free(a);
	fclose(p1);
	fclose(p2);
}

