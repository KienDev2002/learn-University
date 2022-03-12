#include<stdio.h>
#include<math.h>
#include<conio.h>

void nhapin (int n , int A[100]){
	int i ;
	for (i=1 ; i<=n ; i++){
		  if (i%3==0){
		  	 do {
		  	 	 printf("\n nhap A[%d]=",i);
		  	 	 scanf("%d",&A[i]);
		  	 	 if (A[i]%2!=0){
		  	 	 	printf("\n vui long nhap lai so chan");
					}
			   }while(A[i]%2!=0);
		  }else{
		  		printf("\n nhap A[%d]=",i);
				scanf("%d",&A[i]);
		  }
	}
	for (i=1 ; i<=n ; i++){
		printf ("%d\t",A[i]);
	}
}
int main(){
   	int n;
   	int A[100];
   	printf ("nhap n =");
   	scanf ("%d",&n);
   	nhapin(n,A);
}


