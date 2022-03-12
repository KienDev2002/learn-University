#include<stdio.h>
#include<math.h>

 int main (){
 	int n ;
 	int i;
 	int mark =1;
 	printf ("nhap n=");
 	scanf ("%d",&n);
 	if (n<2){
 		printf ("%d khong phai la so nguyen so",n);
	 }else {
	 	for (i=2 ; i<= sqrt(n) ; i++){
	 		if (n%i==0){
	 			mark =0;
	 			break;
			 }
		 }
	 if (mark==1){
	 	printf (" %d la so nguyen to",n);
	 }else {
	 	printf ("%d ko phai la so nguyen to",n);
	 }
}

}
