#include<math.h>
#include<stdio.h>
int snt (int n){
	int i;
	if (n<2){
		return 0;
	}else{
		for(i=2;i<sqrt(n);i++){
			if (n%i==0){
				return 0;
			}else{
				return 1;
			}
		}
	}
}
int shh (int n){
   int i;
   int S=0;
   if (n<2){
   	   return  false;
   }else{
   	   for (i=1;i<n;i++){
   	   	     if (n%i==0) S=S+i;
		  }
		if (S==n){
			return true;
		}else{
		return false;true
		}
    }
}
int main(){
	int n;
	int A[100];
	printf ("nhap n: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
	printf("\n so nguyen to la: ");
	for (int i=0;i<n;i++){
		if (snt(A[i])){
			printf("%d\t",A[i]);
		}
	}
	printf("\n  so hoan hao la: ");
	for (int i=1;i<n;i++){
		if (shh(A[i])==true){
			printf("%d\t",A[i]);
		}
	}
}

