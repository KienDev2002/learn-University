#include<stdio.h>
#include<math.h>
   
   int main (){
   	int i;
   	int S=0 ;
   	for (i=1 ; i<10000; i++){
   		S+=i;
   		if (S>10000){
   			printf ("%d",i);
   			break;
		   }
	   }
   }   
