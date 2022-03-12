#include<stdio.h>
#include<math.h>
#include<string.h>
void nhapin (int n , int m , int a[] , int b[]){
	int *p=a;
	p=b;
	int i=0;
		for (p=&a[0];p<&a[n];p++){
		printf("he so P: a[%d]= ",i);
		i++;
		scanf("%d",p);
			}
	i=0;
		for (p=&b[0];p<&b[m];p++){
		printf("he so Q: b[%d]= ",i);
		i++;
		scanf("%d",p);
			}
	printf("he so cua P la: ");
	for (p=a;p<a+n;p++){
		printf("%d\t",*p);
		}
	printf("\nhe so cua Q la: ");
	for (p=b;p<b+m;p++){
		printf("%d\t",*p);
		}
}
int tinh (int n , int m , int a[] , int b[]){
    float d,S1=0,S2=0;
    int c;
    int *p=a;
    p=b;
	printf("\n nhap d= ");
	scanf("%f",&d);
	int i=0;
	for (p=a;p<a+n;p++){
		S1=S1+((*p)*pow(d,i));
		i++;
		}
	i=0;	
	for (p=b;p<b+n;p++){
		S2=S2+((*p)*pow(d,i));
		i++;
		}
	return S1+S2;	
}
int main(){
	int n,m,a[100],b[100];
	printf("nhap n= ");
	scanf("%d",&n);
	printf("nhap m= ");
	scanf("%d",&m);
	nhapin (n,m,a,b);
	printf("GT da thu: %0.2f",tinh (n,m,a,b));
}

