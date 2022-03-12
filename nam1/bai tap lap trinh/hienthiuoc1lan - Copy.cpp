#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i=2;
 	int dainra =1;
 	printf ("nhap n =");
 	scanf ("%d",&n);
    while (n>1){
    	if (n%i==0){
    		if (dainra !=i){
    		printf ("%d",i);
    		dainra =i;
			}
			n/=i;
		}else {
			i++;
		}
	}
 }
 
 
 
