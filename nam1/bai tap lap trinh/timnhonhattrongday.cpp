#include<stdio.h>
#include<math.h>

int main (){
	int n ;
	int a[100];
	int min = a[1];
		printf ("nhap n=");
		scanf ("%d",&n);
	for (int i=1 ; i<=n ; i++){
		printf ("a[%d]=",i);
		scanf ("%d",&a[i]);
	}
	for (int i=1 ; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
	for (int i=1 ; i<=n ; i++){
		if (a[i]<min){
			min = a[i];
		}
	}
	printf ("\nmin =%d",min);
}
