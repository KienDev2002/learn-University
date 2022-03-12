#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i;
 	int dem =0;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	for (i=1 ; i<=n ; i++){
 		if (n%i==0){
             printf ("%d, ",i);
             dem++;
		 }
	 }
	 printf ("\n  %d co tong so uoc  la : %d  ",n,dem);
}
