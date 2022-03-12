#include<stdio.h>
#include<math.h>
#include<conio.h>
#define size 100
void nhapin (int n , float a[],float b[], int m){
	int i ;
	for (i=0 ; i<n ; i++){
		printf ("a[%d]=",i);
		scanf ("%f",&a[i]);
	}
	for (i=0 ; i<n ; i++){
		printf ("%0.2f\t",a[i]);
	}
		for (i=0 ; i<m ; i++){
		printf ("\nB[%d]=",i);
		scanf ("%f",&b[i]);
	}
	for (i=0 ; i<m ; i++){
		printf ("%0.2f\t",b[i]);
	}
}
float tinh (int n, float a[], float b[] , int m, float d1 , float d2){
	float s1=0,s2=0;
	int i;
	printf ("\nnhap d1 =");
   	scanf ("%f",&d1);
   	printf ("nhap d2 =");
   	scanf ("%f",&d2);
   	for (i=0;i<n;i++){
   			s1+=a[i]*(pow(d1,i));
	   }
	for (i=0;i<m;i++){
   			s2+=b[i]*(pow(d2,i));
	   }   
	   return s1/s2;
}
float heso  (int n , float a[],float b[], int m){
	printf("\n he so P(x)-Q(x) la: ");
	int i;
	int c[100];
	c[0]=0;
	if (m<n){
		for (i=0;i<m;i++){
			c[i]=a[i]-b[i];
		}
		for (i=m;i<n;i++){
			c[i]=a[i];
		}
	  for (i=0;i<n;i++){
		printf("%d\t",c[i]);
		}	
	}else{
		for (i=0;i<n;i++){
			c[i]=a[i]-b[i];
		}
		for (i=n;i<m;i++){
			c[i]=b[i];
		}
	  for (i=0;i<m;i++){
		printf("%d\t",c[i]);
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

