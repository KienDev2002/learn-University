#include<stdio.h>
#include<math.h>
   void indaydiem (int n , float x[100],float y[100]);
   int main (){
   	int n ;
   	float x[100],y[100];
   	int i;
   	printf ("nhap so diem n=");
   	scanf ("%d",&n);
   	for (i=1 ; i<=n ; i++){
   		printf ("nhap day diem %d=",i);
   		scanf ("%f",&x[i]);
   		scanf ("%f",&y[i]);
	   }
	   indaydiem (n ,x,y);
   }
   void indaydiem (int n , float x[100],float y[100]){
   	for (int i=1 ; i<=n ; i++){
   		printf ("\n %0.2f %0.2f",x[i],y[i]);
	   }
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
