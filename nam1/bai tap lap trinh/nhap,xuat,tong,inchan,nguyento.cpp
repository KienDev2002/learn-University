#include <stdio.h>
#include<math.h>
void indayso (int a[100],int n );
void tongdayso (int a[100],int n);
void insochan (int a[100],int n);
 void nguyento ( int n);
 void sapxep (int a[100],int n);
 int main (){
 	int n ,x , a[100];
 	printf ("nhap n = ");
 	scanf ("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("nhap a [%d]=",i);
 		scanf ("%d",&a[i]);
	 }
	 indayso(a,n);
	 tongdayso(a,n);
	 insochan(a,n);
      nguyento (  n);
    sapxep ( a, n);
	 }
	 
 void indayso (int a[100],int n){
 	for (int i =1 ; i<=n ; i++ ){
 		printf ("%8d",a[i]);
	 }
 }
 void tongdayso (int a[100],int n){
 	int i ;
 	int S=0;
 	for (i=1 ; i<=n ; i++){
 		S=S+a[i];
	 }
	 printf ("\n S=%d",S);
 }
 void insochan (int a[100],int n){
 	int i;
 	int sum=0;
 	int mark =0;
 	printf ("\n cac so chan la: ");
 	for (i=1 ; i<=n ; i++){
 		if (a[i]%2==0){
 			sum=sum+a[i];
 			printf ("%5d",a[i]);
		 }else {
		 	mark = mark + a[i];
		 }
	 }
	 printf ("\n gia tri sum =%d",sum);
	 printf ("\n gia tri mark =%d",mark);
 }
 void nguyento ( int n){
 	if(n < 2) {
		printf("%d khong la so nguyen to.\n", n);
	} else {
		int i;
		int mark = 1;
		for(i = 2; i <= sqrt(n); i++)  {
			if(n % i == 0) {
				mark = 0;
				break;
			}
		}
		if(mark == 1) {
			printf("\n %d la so nguyen to", n);
		} else {
			printf("\n %d khong la so nguyen to", n);
		}
	}
}
void sapxep (int a[100],int n){
	int i;
	int stemp;
	for (i=1 ; i<=n ; i++){
		for (int j=i+1;j<=n ; j++){
			if (a[i]>a[j]){
 			stemp=a[i];
 			a[i]=a[j];
 			a[j]=stemp;
		 }
		}
	}
	printf ("\n");
	for (i=1; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
}


 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
