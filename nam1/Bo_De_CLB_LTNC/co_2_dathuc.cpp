#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

void docfile (int &n, FILE *p , float *a , float *b , int &m){
	p=fopen("nhap.txt","r");
	if (p==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	fscanf(p,"%d",&n);
	for (int i=0;i<n+1;i++){
		fscanf(p,"%f",a+i);
	}
	fscanf(p,"%d",&m);
	for (int i=0;i<m+1;i++){
		fscanf(p,"%f",b+i);
	}
	printf("- Da thuc A la: %.2f + %.2f.x + ",*(a+0),*(a+1));
	for (int i=2;i<n;i++){
		printf("%.2f.x^%d + ",*(a+i),i);
	}
	printf("%.2f.x^%d.",*(a+n),n);
		printf("\n- Da thuc B la: %.2f + %.2f.x + ",*(b+0),*(b+1));
	for (int i=2;i<m;i++){
		printf("%.2f.x^%d + ",*(b+i),i);
	}
	printf("%.2f.x^%d.",*(b+m),m);
}
void daoham (int &n , float *a){
	printf("\n- Dao ham cua da thuc A la: %.2f + %.2f.x + ",*(a+1),*(a+2)*2);
	for (int i=3;i<n;i++){
		printf("%.2f.x^%d + ",i*a[i],i-1);
	}
	printf("%.2f.x^%d",n*(*(a+n)),n-1);
}
void nguyenham ( int &n , float *a){
	printf("\n- Nguyen ham cua da thuc A la :%.2f.x + ",*(a+0));
	for (int i=1;i<n;i++){
		printf("%.2f.(x^%d) / %d + ",*(a+i),i+1,i+1);
	}
	printf("%.2f.(x^%d) / %d",*(a+n),n+1,n+1);
}
void xuatfile (int &n , FILE *p1, float *a){
	p1=fopen("dathuc.txt","w");
	fprintf(p1,"- Da thuc A la: %.2f + %.2f.x + ",*(a+0),*(a+1));
	for (int i=2;i<n;i++){
		fprintf(p1,"%.2f.x^%d + ",*(a+i),i);
	}
	fprintf(p1,"%.2f.x^%d.",*(a+n),n);
	fprintf(p1,"\n- Dao ham cua da thuc A la: %.2f + %.2f.x + ",*(a+1), *(a+2)*2);
	for (int i=3;i<n;i++){
		fprintf(p1,"%.2f.x^%d + ",i*(*(a+i)),i-1);
	}
	fprintf(p1,"%.2f.x^%d.",n*(*(a+n)),n-1);
	fprintf(p1,"\n- Nguyen ham cua da thuc A la: %.2f.x + ",*(a+0));
	for (int i=1;i<n;i++){
		fprintf(p1,"%.2f.(x^%d) / %d + ",*(a+i),i+1,i+1);
	}
	fprintf(p1,"%.2f.(x^%d) / %d.",*(a+n),n+1,n+1);
}
int main(){
	int n,m;
	FILE *p, *p1;
	float *a = (float*)calloc(n+1,sizeof(float));
	float *b = (float*)calloc(m+1,sizeof(float));
	docfile(n,p,a,b,m);
	daoham(n,a);
	nguyenham(n,a);
	xuatfile(n,p1,a);
}

