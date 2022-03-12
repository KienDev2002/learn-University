#include<stdio.h>
#include<math.h>

int tinh (int x0 , int m, int a[100] , int b[100] , int n){
	int i;
	int p=0,Q=0;
	for (i=0;i<=n;i++){
		p=p+(a[i]*(pow (x0,i)));
	}
	for (i=0;i<=m;i++){
		Q=Q+(b[i]*(pow (x0,i)));
	}
	return p+Q;
}
void in (int m , int a[100] , int b[100] , int n){
	int i;
	printf("\n he so x.P(x)+Q(x)= ");
	int c[100];
	int d[100];
	c[0]=0;
	for (i=1;i<=n+1;i++){
		c[i]=a[i-1];
	}
	if (m<=n+1){
		for (i=0;i<=m;i++){
			d[i]=b[i]+c[i];
		}
		for (i=m+1;i<=n+1;i++){
			d[i]=c[i];
		}
		for (i=0;i<=n+1;i++){
			printf("%d\t",d[i]);
		}
	}else {
	for (i=0;i<=n+1;i++){
			d[i]=b[i]+c[i];
		}
		for (i=n+2;i<=m;i++){
			d[i]=b[i];
		}
		for (i=0;i<=m;i++){
			printf("%d\t",d[i]);
		}	
	}
}
int main (){
	int n,m,a[100],x0,b[100];
	printf("nhap n he so P=");
	scanf("%d",&n);
	printf("nhap m he so Q=");
	scanf("%d",&m);
	int i;
	for(i=0;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
    for(i=0;i<=n;i++){
		printf("%d\t",a[i]);
	}
	for(i=0;i<=m;i++){
		printf("\nb[%d]=",i);
		scanf("%d",&b[i]);
	}
    for(i=0;i<=m;i++){
		printf("%d\t",b[i]);
	}
	printf("nhap x0= ");
	scanf("%d",&x0);
	printf("\n%d",tinh(x0,m,a,b,n));
	in (m,a,b,n);
}
