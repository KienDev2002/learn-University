#include<stdio.h>
#include<math.h>
float tinh (int n , float a[100]){
	float t;
	int i;
	float S=0;
	printf("\nnhap so thu t=");
	scanf("%f",&t);	
	for (i=0;i<=n;i++){
		S=S+( a[i]*pow (t,i) +  a[i]*pow (-t,i) );
	}
	return S;
}
int kiemtra (int n , float a[100]){
	int i;
	float z,sum;
	printf("\n nhap z: ");
	scanf ("%f",&z);
	for (i=0;i<=n;i++){
	   sum+=a[i]*i*pow(z,i-1);
		}
	return sum;
}
int main (){
	int n;
	float a[100];
	printf("nhap n he so P=");
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++){
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
	}
    for(i=0;i<=n;i++){
		printf("%0.2f\t",a[i]);
	}
	printf("\n%0.2f",tinh(n,a));
		if (kiemtra(n,a)==0){
		printf("\nthoa man");
	}else{
			printf("\nkhong thoa man");	
	}
}
