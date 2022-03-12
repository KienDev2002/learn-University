#include<stdio.h>
#include<math.h>

int snt (int n){
   int i,dem=0;
   if (n<2){
   	   return 0;
   }else{
   	  for (i=2;i<=sqrt(n);i++){
   	  	     if (n%i==0){
   	  	        dem++;
			}
		}
    }
    if (dem==0){
    	return 1;
	}else{
		return 0;
	}
}
int shh (int n){
	int S=0;
	if (n<2){
		return 0;
	}else
	for (int i=1;i<n;i++){
		if (n%i==0){
			S+=i;
		}
	}
	if (S==n)	return 1;
	else	return 0;
}
int main (){
	int n;
	int A[100];
	printf("nhap n: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
			printf("nhap A[%d]= ",i);
			scanf("%d",&A[i]);
	}
	printf(" so nguyen to la: ");
	for (int i=0;i<n;i++){
		if (snt(A[i])){
			printf("%d\t",A[i]);
		}
	}
	printf(" so hoan hao la: ");
	for (int i=0;i<n;i++){
		if (shh(A[i])){
			printf("%d\t",A[i]);
		}
	}
	
}
