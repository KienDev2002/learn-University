#include<stdio.h>
#include<math.h>
#include<conio.h>

 int main (){
 	int a[100] ;
 	int n;
 	int dem =0 ;
 	printf ("\n nhap so n =");
 	scanf("%d",&n);
 	
 	for (int i=1 ; i<=n ; i++){
 	printf ("\na[%d]: ",i);
 	scanf ("%d",&a[i]);
	}
	for (int i=1 ; i<=n ; i++){
     	printf ("%d\t",a[i]); 
	 } 
 int min = a[1];
 for (int i=2 ; i <=n ; i++){
 	if (min > a[i]){
 		min = a[i];
	 }
	}
 
 printf ("\n gia tri min = %d",min);
 for (int i=1 ; i<=n ; i++){
     if (a[i]>=3 && a[i]<=50){
       dem++;
	 }	 
}
printf ("\n so phan tu khoang = %d\n",dem);
printf("\day so sau khi sap xep la:\t");
 int stemp ;
 for (int i=1; i<n ; i++){
 	for (int j=i+1;j<=n ; j++){
 		if (a[i]>a[j]){
 			stemp=a[i];
 			a[i]=a[j];
 			a[j]=stemp;
		 }
		 
	 }
 }
 for (int i=1 ; i<=n ; i++){
     printf ("%d\t",a[i]);
}
}


