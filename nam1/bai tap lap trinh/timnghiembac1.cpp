// nghiem bac 1
#include<stdio.h>
#include<math.h>
#include<conio.h>

 int main (){
 		float a , x ,b;
 	printf ("\n nhap a =");
 	scanf("%f",&a);
 	printf ("\n nhap b =");
 	scanf("%f",&b);
  if (a==0 && b==0){
  	printf ("\n phuong trinh vo so nghiem");
  }else if ( a==0 && b!=0){
  	printf ("\n phuong trinh vo  nghiem");
  }else {
  		printf ("\n phuong trinh co 1   nghiem = %f",-b/a);  
  		
	  }
  			
	  
}
 	
