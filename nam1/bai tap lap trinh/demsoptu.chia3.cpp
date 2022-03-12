#include<stdio.h>
#include<math.h>
void demsochia3 (int n , int a[100]);
void tongptuchan (int n , int a[100]);
void tinhT (int n , int a[100]);
 int main (){
 	int n ;
 	int a[100];
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("a[%d]=",i);
 		scanf ("%d",&a[i]);
	 }
	 demsochia3 ( n ,  a);
	 tongptuchan (n , a);
	 tinhT (n , a);


}
void demsochia3 (int n , int a[100]){
	int dem =0;
	for (int i=1 ; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
	printf ("\n");
	for (int i=1 ; i<=n ; i++){
		if (a[i]%3==0){
			dem++;
		}
	}
	printf ("so ptu chia het cho 3 la = %d",dem);
}
void tongptuchan (int n , int a[100]){
	printf ("\n");
	int S=0;
	for (int i=1 ; i<=n ; i++){
		if (a[i]%2==0){
			S=S+a[i];
		}
	}
	printf ("tong cua day chan la = %d",S);
}
void tinhT (int n , int a[100]){
	printf ("\n");
	int dem=0;
	for (int i=1 ; i<=n ; i++){
		if (a[i]%3==0){
			dem++;
		}
	}
	int S=0;
	for (int i=1 ; i<=n ; i++){
		if (a[i]%2==0){
			S=S+a[i];
      }
  }
      printf ("%f",(float)dem/S);
}












