#include<stdio.h>
#include<math.h>
#include<conio.h>

 int main (){
 	int a[100];
 	int n;
 	int x;
 	int d;
 	int dem=0;
 	printf ("\n nhap x=");
 	scanf("%d",&x);
 	printf ("\n nhap so phan tu n =");
 	scanf ("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf ("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for (int i =1 ; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
	printf ("\n");
	for (int i=1 ; i<=n; i++){
		if (a[i]==x){
			dem++;
		}
	}
	printf ("\n day bang phan tu bang x la=%d ",dem);
	
	printf ("\n");
	int S=0;
	for (int i=1; i<=n;i++){
		if (a[i]>x){
				{
				S=S+a[i];
				d++;
				}
		}
	}
	printf ("\n TBC=%f",1.0*S/d);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 }
