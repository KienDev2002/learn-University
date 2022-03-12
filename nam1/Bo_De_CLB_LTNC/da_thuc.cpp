#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n, FILE *p , float **a, int *m, float **b, FILE *p1){
	fscanf(p,"%d",&(*n));
	for (int i=0;i<=(*n);i++){
		fscanf(p,"%f",&(*a)[i]);
	}
	fscanf(p,"%d",&(*m));
	for (int i=0;i<=(*m);i++){
		fscanf(p,"%f",&(*b)[i]);
	}
	printf("- Da thuc A la: %.2f + %.2f.x",(*a)[0],(*a)[1]);
	fprintf(p1,"- Da thuc A la: %.2f + %.2f.x",(*a)[0],(*a)[1]);
	for (int i=2;i<=(*n);i++){
		printf(" + %.2f.x^%d",(*a)[i],i);
		fprintf(p1," + %.2f.x^%d",(*a)[i],i);
	}
	printf("\n- Da thuc Q la: %.2f + %.2f.x",(*b)[0],(*b)[1]);
	fprintf(p1,"\n- Da thuc Q la: %.2f + %.2f.x",(*b)[0],(*b)[1]);
	for (int i=2;i<=(*m);i++){
		printf(" + %.2f.x^%d",(*b)[i],i);
		fprintf(p1," + %.2f.x^%d",(*b)[i],i);
	}
}
void daoham (int n , float *a, FILE *p1){
	printf("\n- Dao ham cua da thuc A la: %.2f + %.2f.x",*(a+1),*(a+2)*2);
	fprintf(p1,"\n- Dao ham cua da thuc A la: %.2f + %.2f.x",*(a+1),*(a+2)*2);
	for (int i=3;i<=n;i++){
		printf(" + %.2f.x^%d",i*a[i],i-1);
		fprintf(p1," + %.2f.x^%d",i*a[i],i-1);
	}
}
void nguyenham ( int n , float *a , FILE *p1){
	printf("\n- Nguyen ham cua da thuc A la :%.2f.x",*(a+0));
	fprintf(p1,"\n- Nguyen ham cua da thuc A la :%.2f.x",*(a+0));
	for (int i=1;i<=n;i++){
		printf(" + %.2f.(x^%d) / %d",*(a+i),i+1,i+1);
		fprintf(p1," + %.2f.(x^%d) / %d",*(a+i),i+1,i+1);
	}
}
double tinhdathuc ( float *a , float *x, int n, FILE *p1){
	float S1=0;
	for (int i=0;i<=n;i++){
		 S1=S1+(a[i]*pow((*x),i));
	}
	return S1;
}
double tinhdaoham (int n , float *a , float *x , FILE *p1){
	float S=a[1];
	for (int i=2;i<=n;i++){
		S=S+(i*a[i]*(pow((*x),i-1)));
	}
	return S;
}
double tinhnguyenham(int n , float *a , float x , int c , FILE *p1){
	c=100;
	float S2=a[0]*x+c;
	for (int i=1;i<=n;i++){
		S2=S2+((a[i]*(pow(x,i+1)/(i+1)))+c);
	}
	return S2;
}
void hieudathuc (float *b , int m, int n , float *a , float *d, FILE *p1){
	int dem=0;
	d[0]=0;
	if (m>n){
		for (int i=0;i<=n;i++){
			d[dem]=a[i]-b[i];
			dem++;
		}
		for (int i=n+1;i<=m;i++){
			d[dem]=-b[i];
			dem++;
		}
	}else if (n>m){
		for (int i=0;i<=m;i++){
			d[dem]=a[i]-b[i];
			dem++;
		}
		for (int i=m+1;i<=n;i++){
			d[dem]=-a[i];
			dem++;
		}
	}else if (m==n){
		for (int i=0;i<=n;i++){
			d[dem]=a[i]-b[i];
			dem++;
		}
	}
	printf("\n- Hieu 2 da thuc A - Q la: %.2f + %.2f.x",*(d+0),*(d+1));
	fprintf(p1,"\n- Hieu 2 da thuc A - Q la: %.2f + %.2f.x",*(d+0),*(d+1));
	for (int i=2;i<=dem-1;i++){
		printf(" + %.2f.x^%d",*(d+i),i);
		fprintf(p1," + %.2f.x^%d",*(d+i),i);
	}
}
void truhaihs (int n , int *k , float *a , float *s, float *e, FILE *p1){
	int dd=0;
	printf("\n- He so da thuc A(x) la: \n");
	fprintf(p1,"\n- He so da thuc A(x) la: \n");
	for (int i=0;i<=n;i++){
		printf ("%.2f\t",*(a+i));
		fprintf (p1,"%.2f\t",*(a+i));
	}
	fprintf(p1,"\n- He so da thuc B(x) la: \n");
	printf("\n- He so da thuc B(x) la: \n");
	for (int i=0;i<=*k;i++){
		printf ("%.2f\t",*(s+i));
		fprintf (p1,"%.2f\t",*(s+i));
	}
	e[0]=0;
	if (n>(*k)){
		for (int i=0;i<=*k;i++){
			e[dd]=a[i]-s[i];
			dd++;
		}
		for (int i=(*k)+1;i<=n;i++){
			e[dd]=a[i];
			dd++;
		}
	}else if ((*k)>n){
		for (int i=0;i<=n;i++){
			e[dd]=a[i]-s[i];
			dd++;
		}
		for (int i=n+1;i<=*k;i++){
			e[dd]=-s[i];
			dd++;
		}
	}else if ((*k)==n){
		for (int i=0;i<=*k;i++){
			e[dd]=a[i]-s[i];
			dd++;
		}
	}
	printf("\n- Hieu 2 he so A(x) - B(x) la: \n");
	fprintf(p1,"\n- Hieu 2 he so A(x) - B(x) la: \n");
	for (int i=0;i<dd;i++){
		printf("%.2f\t",*(e+i));
		fprintf(p1,"%.2f\t",*(e+i));
	}
}
void tinhheso (int n , int k , float *s , float *a ,int *h, float *C , float *D, FILE *p1){
	printf("\nnhap bac C(x): ");
	scanf("%d",h);
	for (int i=0;i<=*h;i++){
		printf("c[%d]=",i);
		scanf("%f",&C[i]);
	}
	printf("\n- He so da thuc C(x) la: \n");
	fprintf(p1,"\n- He so da thuc C(x) la: \n");
	for (int i=0;i<=*h;i++){
		printf("%.2f\t",C[i]);
		fprintf(p1,"%.2f\t",C[i]);
	}
	printf("\n- He so A(x) + B(x) - C(x) la: \n");
	fprintf(p1,"\n- He so A(x) + B(x) - C(x) la: \n");
	D[0]=0;
		if(n>=k){
		for(int i=0;i<=n;i++){
			D[i]=a[i]+s[i];
		}
			if(n>=*h){
				for(int i=0;i<=n;i++){
					printf("%.2f\t",D[i]-C[i]);
					fprintf(p1,"%.2f\t",D[i]-C[i]);
				}
			}
			else{
				for(int i=0;i<=*h;i++){
					printf("%.2f\t",D[i]-C[i]);
					fprintf(p1,"%.2f\t",D[i]-C[i]);
				}
			}
	}
	else{
		for(int i=0;i<=k;i++){
			D[i]=a[i]+s[i];
		}
			if(k>=*h){
				for(int i=0;i<=k;i++){
					printf("%.2f\t",D[i]-C[i]);
					fprintf(p1,"%.2f\t",D[i]-C[i]);
				}
			}
			else{
				for(int i=0;i<=*h;i++){
					printf("%.2f\t",D[i]-C[i]);
					fprintf(p1,"%.2f\t",D[i]-C[i]);
				}
			}
	}
}
int main(){
	FILE *p, *p1;
	p=fopen("nhap.txt","r");
	if (p==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	p1=fopen("dathuc.txt","w");
	int n,c=100,m,dem,k,dd,h;
	float x;
	float *a = (float*)calloc(n+5,sizeof(float));
	float *b = (float*)calloc(m+1,sizeof(float));
	float *d = (float*)calloc(dem+1,sizeof(float));
	float *s = (float*)calloc(k+1,sizeof(float));
	float *e = (float*)calloc(dd+1,sizeof(float));
	float *C = (float*)calloc(h+1,sizeof(float));
	float *D = (float*)calloc(100,sizeof(float));
	docfile(&n,p,&a,&m,&b,p1);
//	daoham(n,a,p1);
//	nguyenham(n,a,p1);
//	printf("\n- nhap x: ");scanf("%f",&x);
//	printf("\n- gia tri cua da thuc A tai x = %.2f  la: %.2lf",x,tinhdathuc(a,&x,n,p1));
//	fprintf(p1,"\n- gia tri cua da thuc A tai x = %.2f  la: %.2lf",x,tinhdathuc(a,&x,n,p1));
//	printf("\n- gia tri dao ham cua da thuc A tai x = %.2f  la: %.2lf",x,tinhdaoham(n,a,&x,p1));
//	fprintf(p1,"\n- gia tri dao ham cua da thuc A tai x = %.2f  la: %.2lf",x,tinhdaoham(n,a,&x,p1));
//	printf("\n- gia tri nguyen ham cua da thuc A tai x = %.2f  la: %.2lf",x,tinhnguyenham(n,a,x,c,p1));
//	fprintf(p1,"\n- gia tri nguyen ham cua da thuc A tai x = %.2f  la: %.2lf",x,tinhnguyenham(n,a,x,c,p1));
//	hieudathuc (b , m, n , a , d,p1);
	printf("\nnhap bac B(x): ");
	scanf("%d",&k);
	for (int i=0;i<=k;i++){
		printf("b[%d]=",i);
		scanf("%f",&s[i]);
	}
	truhaihs(n,&k,a,s,e,p1);
	fprintf(p1,"\n- He so da thuc A(x) la: \n");
	printf("\n- He so da thuc A(x) la: \n");
	for (int i=0;i<=n;i++){
		printf ("%.2f\t",*(a+i));
		fprintf (p1,"%.2f\t",*(a+i));
	}
	printf("\n");
	fprintf(p1,"\n");
	for (int i=0;i<=k;i++){
		printf ("%.2f\t",*(s+i));
		fprintf (p1,"%.2f\t",*(s+i));
	}
	tinhheso(n,k,s,a,&h,C,D,p1);
	free(a);
	free(b);
	free(d);
	free(s);
	free(e);
	free(C);
	free(D);
	return 0;
}
