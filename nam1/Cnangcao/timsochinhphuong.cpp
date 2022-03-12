#include<stdio.h>
#include<math.h>

 int main (){
 	int n ,m  ;
 	int i;
 	printf ("nhap m va n =");
 	scanf ("%d%d",&m,&n);
 	if (m>0 && m<n){
 		int start = sqrt(m);
 		start = (start * start == m)?start : start +1;
 		int end = sqrt(n);
 		for (i=start ; i<=end ; i++){
 			printf ("%d ",i*i);
		 }
	 }else {
	 	printf ("vui long nhap lai m , n >0 va m<n");
	 }
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
