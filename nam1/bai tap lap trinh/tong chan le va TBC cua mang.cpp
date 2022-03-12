#include<stdio.h>
#include<math.h>
#include<conio.h>

 int main (){
 	int a[100];
 	int n;
 	printf ("\n nhap n =");
 	scanf("%d",&n);
 	for (int i=1 ; i<=n ; i++){
 		printf ("\n a[%d]=",i);
 		scanf("%d",&a[i]);
	 }
	for (int i=1 ; i<=n ; i++){
		printf ("%d\t",a[i]);
	}
	printf ("\n");
	int sumchan =0;
	int sumle=0;
	int S =0;
	for (int i=1 ; i<=n ; i++){
	    if (a[i]%2==0){
	    		sumchan = sumchan + a[i];
		}else {
			sumle= sumle +a[i];
		}
	}
	
	printf ("\n sumchan = %d",sumchan);
	printf ("\n sumle = %d",sumle);
	
	printf ("\n");
	for (int i=1 ; i<=n ; i++){
		S = S +a[i];
	}
	printf ("\n TBC = %f",1.0*S/n);
 }
 
 
 
 
 
 
 
 
