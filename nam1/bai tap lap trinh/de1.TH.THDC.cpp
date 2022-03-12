#include<stdio.h>
#include<math.h>
int demsochia3 (int n , int a[100]);
int tongptuchan (int n , int a[100]);
 int main (){
 	int n ;
 	int a[100];
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("a[%d]=",i);
 		scanf ("%d",&a[i]);
	 }
	 printf ("so lan chia het cho 3 la :%d",demsochia3 (n,a));
	 printf (" tong chan =%d",tongptuchan (n,a));
	 printf ("T=%0.2f",(float)demsochia3 (n,a)/tongptuchan ( n,a));
}
int  demsochia3 (int n , int a[100]){
	int dem =0;
	for (int i=1 ; i<=n ; i++){
		if (a[i]%3==0){
			dem++;
		}
	}
	return dem;
}
int tongptuchan (int n , int a[100]){
	printf ("\n");
	int S=0;
	for (int i=1 ; i<=n ; i++){
		if (a[i]%2==0){
			S=S+a[i];
		}
	}
return S;
}













