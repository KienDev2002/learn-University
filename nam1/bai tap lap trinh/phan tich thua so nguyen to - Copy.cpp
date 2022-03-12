#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i=2;
 	printf ("nhap n>1=");
 	scanf ("%d",&n);
 	if (n<2){
 		printf ("vui  long nhap lai n>=2");
    } else {
    	printf ("%d = ",n);
    	while (n>1){
    		if (n%i==0){
    			printf ("%d",i);
    			if (n!=i){
    				printf ("x");
				}
				n/=i;
			}else{
				i++;
			}
		}
    }
}
