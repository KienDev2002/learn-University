#include<stdio.h>
#include<math.h>
#include<conio.h>
#define size 100
void nhapin (int n , float *a,float *b, int m){
	int i ;
	float *p=a;
	float *ptr=b;
	for (i=0 ; i<=n ; i++){
		printf ("a[%d]=",i);
		scanf ("%f",&p[i]);
	}
	for (i=0 ; i<=n ; i++){
		printf ("%0.2f\t",*(p+i));
	}
	printf("\n");
		for (i=0 ; i<=m ; i++){
		printf ("b[%d]=",i);
		scanf ("%f",&ptr[i]);
	}
	for (i=0 ; i<=m ; i++){
		printf ("%0.2f\t",*(ptr+i));
	}
}
float tinh (int n, float *a, float *b, int m, float d1 , float d2){
	float s1=0,s2=0;
	int i;
	float *p=a;
	float *ptr=b;
	printf ("\nnhap d1 =");
   	scanf ("%f",&d1);
   	printf ("nhap d2 =");
   	scanf ("%f",&d2);
   	for (i=0;i<=n;i++){
   			s1+=(*(p+i))*(pow(d1,i));
	   }
	for (i=0;i<=m;i++){
   			s2+=(*(ptr+i))*(pow(d2,i));
	   }   
	   return s1/s2;
}
float heso  (int n , float a[],float b[], int m){
	printf("\nhe so P(x)-Q(x) la: \n");
	int i;
	float *p=a;
	float *ptr=b;
	float c[size];
	c[0]=0;
	if (m<n){
		for (i=0;i<=m;i++){
			c[i]=(*(p+i))-(*(ptr+i));
		}
		for (i=m+1;i<=n;i++){
			c[i]=*(p+i);
		}
	  for (i=0;i<=n;i++){
		printf("%0.2f\t",c[i]);
		}	
	}else{
		for (i=0;i<=n;i++){
			c[i]=(*(p+i))-(*(ptr+i));
		}
		for (i=n+1;i<=m;i++){
			c[i]=*(ptr+i);
		}
	  for (i=0;i<=m;i++){
		printf("%0.2f\t",c[i]);
		}
	}
}
int main(){
   int n,m;
   float d1,d2;
   float a[size];
   float b[size];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	printf ("nhap m =");
   	scanf ("%d",&m);
   	nhapin(n,a,b,m);
   	printf("gia tri S= %0.2f",tinh(n,a,b,m,d1,d2));
   	heso(n,a,b,m);
   	return 0;
}

