#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int &m, float *a , FILE *&p){
	p=fopen("input.txt","r");
	if (!p){
		printf("khong tim thay file input.txt");
	}
	// neu nhap khong cho m
	m=0;
	while(!feof(p)){// chay tu dau den cuoi de luu m
		float x;
		fscanf(p,"%f",&x);
		m++;
	}
	printf("%d\n",m/2);
	rewind(p);// tro lai tu dau
	for (int i=0;i<m/2;i++){	
		fscanf(p,"%f",&a[i]);
	}
	fclose(p);
	for (int i=0;i<m/2;i++){	
		printf("%0.2f\t",a[i]);
	}
}
float tinhdathuc (int &m , float *a , FILE *&p){
	float S=0,d;
	p=fopen("input.txt","r");
	if (!p){
		printf("khong tim thay file input.txt");
	}
	while(!feof(p)){// chay tu dau den cuoi de luu m
		float x;
		fscanf(p,"%f",&d);
	}
	printf("\n%.2f",d);
	rewind(p);
	for (int i=0;i<m/2;i++){
		 S=S+(a[i]*pow(d,i));
	}
	return S;
}
void dathucQ (int &m, float *a , FILE *&p , float *b){
	p=fopen("input.txt","r");
	if (!p){
		printf("khong tim thay file input.txt");
	}
	// neu nhap khong cho m
	m=0;
	while(!feof(p)){// chay tu dau den cuoi de luu m
		float x;
		fscanf(p,"%f",&x);
		m++;
	}
	printf("\n%d\n",m/2-2);
	rewind(p);// tro lai tu dau
	for (int i=0;i<m/2;i++){	
		fscanf(p,"%f",&a[i]);
	}
	for (int i=m/2+1;i<m-1;i++){	
		fscanf(p,"%f",&b[i]);
	}
	for (int i=m/2+1;i<m-1;i++){	
		printf("%0.2f\t",b[i]);
	}
	fclose(p);
}
void tong2dathuc (int &m , float *a , FILE *&p , float *b, float *c , int &dem){
	 dem=0;
		printf("\n");
	c[0]=0;
	int i=0,j;
	while(i<m/2-2){
		for (int j=m/2+1;j<m-1;j++){
				c[dem]=a[i]+b[j];
				i++;
				dem++;
		}
	}
	for (i=m/2-2;i<m/2+1;i++){
		c[dem]=a[i];
		dem++;
	}
		for (int i=0;i<dem-1;i++){
		printf("%.2f\t",c[i]);
	}
}
double tinh2dathuc (int &m ,  float *a , FILE *&p , float *b , float &x1, float &x2){
	float S1=0,S2=0;
	for (int i=0;i<m/2;i++){
		 S1=S1+(a[i]*pow(x1,i));
	}
	int j=0;
	for (int i=m/2+1;i<m-1;i++){
		 S2=S2+(b[i]*pow(x2,j));
		 j++;
	}
	return S1+S2;
}
void inout (int &m , float *a , FILE *&p , float *b , float *c , int &dem , float &x1, float &x2){
	FILE *fileout;
	fileout=fopen("output.txt","w");
	fprintf(fileout,"- bac cua P la: %d\n",m/2-1);
	printf("\n");
	fprintf(fileout,"%.2f + ",a[0]);
	for (int i=1;i<m/2-1;i++){
		fprintf(fileout,"%.2f.x^%d + ",a[i],i);
	}
	fprintf(fileout,"%.2f.x^%d",a[m/2-1],m/2-1);
	fprintf(fileout,"\n- gia tri da thuc tai d la: %0.2f",tinhdathuc(m,a,p));
	fprintf(fileout," \n- bac cua Q la: %d\n",m-m/2-3);
	printf("\n");
	fprintf(fileout,"%.2f + ",b[m/2+1]);
	int j=1;
	for (int i=m/2+2;i<m-2;i++){
		fprintf(fileout,"%.2f.x^%d + ",b[i],j);
		j++;
	}
	fprintf(fileout,"%.2f.x^%d",b[m-2],m-m/2-3);
		fprintf(fileout,"\n- tong 2 da thuc P+Q la: \n%.2f + ",c[0]);
	for (int i=1;i<dem-2;i++){
		fprintf(fileout,"%.2f.x^%d + ",c[i],i);
	}
	fprintf(fileout,"%.2f.x^%d",a[dem-2],dem-2);
	fprintf(fileout,"\n- tong gia tri cua 2 da thuc tai x1,x2 la: %0.2lf",tinh2dathuc(m,a,p,b,x1,x2));
	fclose(fileout);
}
int main(){
	int m,n,dem;
	float S,x1,x2;
	float *a= (float*)malloc(m*sizeof(float));
	float *b= (float*)malloc(m*sizeof(float));
	float *c= (float*)malloc(m*sizeof(float));
	FILE *p;
	docfile(m,a,p);
	dathucQ(m,a,p,b);
	tong2dathuc(m,a,p,b,c,dem);
	printf("\nnhap x1: ");scanf("%f",&x1);
	printf("nhap x2: ");scanf("%f",&x2);
	printf("\n%.2lf",tinh2dathuc(m,a,p,b,x1,x2));
	inout(m,a,p,b,c,dem,x1,x2);
	free(a);
	free(b);
	free(c);
}

