#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>d
void docfile (int *n , float **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(float*)malloc((*n)*sizeof(float)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<=*n;i++){
		fscanf(p1,"%f",&(*a)[i]);
	}
}
void in(int n,float*a,FILE *p2){
	fprintf(p2,"%.2f",a[0]);
	for (int i=1;i<=n;i++){
		fprintf(p2," + %.2f.x^%d",a[i],i);
	}
	printf("%.2f",a[0]);
	for (int i=1;i<=n;i++){
		if (a[i]>0){
			printf(" + %.2f.x^%d",a[i],i);
		}else if (a[i]<0){
				printf(" - %.2f.x^%d",fabs(a[i]),i);
		}
	}
}
void daoham (int  n , float *a){
		if (a[1]>0){
				printf("\n%.2f",a[1]);
		}else if (a[1]<0){
				printf("\n - %.2f",fabs(a[1]));
		}
	for (int i=2;i<=n;i++){
		if (a[i]>0){
			printf(" + %.2f.x^%d",a[i]*i,(i-1));
		}else if (a[i]<0){
				printf(" - %.2f.x^%d",fabs(a[i]*i),(i-1));
		}
	}
}
void tich (int n , float *a){
	int m,dem=0;
	float *b;
	if (((b)=(float*)malloc((n+1)*sizeof(float)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	scanf("%d",&m);
	for (int i=0;i<=m;i++){
		scanf("%f",&b[i]);
	}
		float *c;
	if (((c)=(float*)malloc((n+m+1)*sizeof(float)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	printf("\n");
	for (int i=0;i<=n;i++){
		for (int j=0;j<=m;j++){
			c[i+j]+=a[i]*b[j];
		}
	}
	printf("%.2f", c[0]);
	for(int i = 1; i <= n+m; i++){
		if(c[i] > 0)
			printf(" + %.2f*x^%d", c[i], i);
		if(c[i] < 0){
			printf(" - %.2f*x^%d", fabs(c[i]), i);
		}
	}
}
int main(){
	int n;
    float *a;
//    char *c;
//    if ((c=(char*)malloc(30*sizeof(char)))==NULL){
//    	printf("chua co bo nho");
//    	exit(0);
//	}
//	printf("\nNhap teen file can doc:");
//	gets(c);
    FILE *p1 = fopen("dathuc72.txt","r"),  *p2 = fopen("dathuc27.txt","w");
    if (p1==NULL){
    	printf("\nchua co file");
    	exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a,p2);
	daoham(n,a);
	tich (n,a);
	int	fcloseall(void);
	free(a);
	//free(c);
}

