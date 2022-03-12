#include<stdio.h>
#include<math.h>
void in (int n , float a[100]);
void tansuat (int n , float a[100]);
int mangdoixung (int n , int a[100]){
	int i;
	for (i=0;i<n/2;i++){
		
	}
}
int main(){
 	int n ;
    float a[100];
 	int i;
 	printf ("nhap n =");
 	scanf ("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("nhap a[%d]=",i);
 		scanf ("%f",&a[i]);
}
  in (n,a);
  tansuat(n,a);
}
void in (int n , float a[100]){
	int i;
	for (i=1 ; i<=n ; i++){
		printf("%0.2f",a[i]);
	}
}
void tansuat (int n , float a[100])
{
		float stemp = 0;
	for (int i =1 ; i<=n ; i++){
		for (int j=i+1 ; j<=n ; j++){
			if (a[i]>a[j]){
				stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
}
	printf ("\n");
	int dd;
	int j;
	int i=1;
	while (i<=n)
	{
		 dd=1;
		for (j=i+1 ; j<=n;j++){
	     if (a[i]==a[j]){
	     	dd++;
		}
	}
		printf ("\nso lan xuat hien cua %0.2f la: %d",a[i],dd);
			i=i+dd;
	}
}
