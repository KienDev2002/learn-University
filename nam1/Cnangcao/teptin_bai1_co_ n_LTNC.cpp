#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void docfile ( FILE *p , float *b , int &m, float &d , int &n , float *a){
	p=fopen("input.txt","r");
	if (p==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	fscanf(p,"%d",&m);
	for (int i=0;i<=m;i++){
		fscanf(p,"%f",b+i);
	}
	fscanf(p,"%f",&d);
	fscanf(p,"%d",&n);
	for (int i=0;i<=n;i++){
		fscanf(p,"%f",a+i);
	}
	printf("- Da thuc P la: %.2f + %.2f.x",*(b+0),*(b+1));
	for (int i=2;i<=m;i++){
		printf(" + %.2f.x^%d",*(b+i),i);
	}
	printf("\n- Da thuc Q la: %.2f + %.2f.x",*(a+0),*(a+1));
	for (int i=2;i<=n;i++){
		printf(" + %.2f.x^%d",*(a+i),i);
	}
}
double tinhdathuc (int &m , float *b , float &d){
	float S=0;
	for (int i=0;i<=m;i++){
		S+=(b[i]*pow(d,i));
	}
	return S;
}
void tong2dathuc (float *b , int &m, int &n , float *a , float *c, int &dem){
	dem=0;
	c[0]=0;
	if (m>n){
		for (int i=0;i<=n;i++){
			c[dem]=a[i]+b[i];
			dem++;
		}
		for (int i=n+1;i<=m;i++){
			c[dem]=b[i];
			dem++;
		}
	}else{
		for (int i=0;i<=m;i++){
			c[dem]=a[i]+b[i];
			dem++;
		}
		for (int i=m+1;i<=n;i++){
			c[dem]=a[i];
			dem++;
		}
	}
	printf("- Tong 2 da thuc P + Q la: %.2f + %.2f.x + ",*(c+0),*(c+1));
	for (int i=2;i<=dem-2;i++){
		printf("%.2f.x^%d + ",*(c+i),i);
	}
	printf("%.2f.x^%d.",*(c+dem-1),dem-1);
}
double tinh2dathuc (int &m ,  float *a , float *b , float &x1, float &x2 , int &n){
	float S1=0,S2=0;
	for (int i=0;i<=n;i++){
		 S1=S1+(a[i]*pow(x2,i));
	}
	for (int i=0;i<=m;i++){
		 S2=S2+(b[i]*pow(x1,i));
	}
	return S1+S2;
}
void xuatfile (FILE *p1,float *b , int &m , float &d , int &n , float *a  , float *c , int &dem , float &x1 , float &x2){
	p1=fopen("output.txt","w");
	fprintf(p1,"- Da thuc P la: %.2f + %.2f.x + ",*(b+0),*(b+1));
	for (int i=2;i<m;i++){
		fprintf(p1,"%.2f.x^%d + ",*(b+i),i);
	}
	fprintf(p1,"%.2f.x^%d.",*(b+m),m);
	fprintf(p1,"\n- Voi d = %.2f thi gia tri da thuc P la: ",d);
	fprintf(p1,"%.2lf.",tinhdathuc(m,b,d));
	fprintf(p1,"\n- Da thuc Q la: %.2f + %.2f.x + ",*(a+0),*(a+1));
	for (int i=2;i<n;i++){
		fprintf(p1,"%.2f.x^%d + ",*(a+i),i);
	}
	fprintf(p1,"%.2f.x^%d.",*(a+n),n);
	fprintf(p1,"\n- Tong 2 da thuc P + Q la: %.2f + %.2f.x + ",*(c+0),*(c+1));
	for (int i=2;i<=dem-2;i++){
		fprintf(p1,"%.2f.x^%d + ",*(c+i),i);
	}
	fprintf(p1,"%.2f.x^%d.",*(c+dem-1),dem-1);
	fprintf(p1,"\n- gia tri cua P(x1) + Q(x2) la: %0.2lf.",tinh2dathuc(m,a,b,x1,x2,n));
}
int main(){
	int m,n,dem;
	float d,x1,x2;
	FILE *p, *p1;
	float *a = (float*)calloc(n+1,sizeof(float));
	float *b = (float*)calloc(m+1,sizeof(float));
	float *c= (float*)malloc(dem*sizeof(float));
	docfile(p,b,m,d,n,a);
	printf("\n- Voi d = %.2f thi gia tri da thuc P la: ",d);
	printf("%.2lf\n",tinhdathuc(m,b,d));
	tong2dathuc(b,m,n,a,c,dem);
	printf("\n- nhap x1: ");scanf("%f",&x1);
	printf("- nhap x2: ");scanf("%f",&x2);
	printf("- gia tri cua P(x1) + Q(x2) la: %.2lf",tinh2dathuc(m,a,b,x1,x2,n));
	xuatfile(p1,b,m,d,n,a,c,dem,x1,x2);
	free(a);
	free(b);
	free(c);
}

