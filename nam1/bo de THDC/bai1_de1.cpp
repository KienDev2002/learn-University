#include<stdio.h>
#include<math.h>
void nhapin (int n , int A[100]){
	int i;
	for(i=1;i<=n;i++){
		printf("A[%d]=",i);
		scanf("%d",&A[i]);
	}
    for(i=1;i<=n;i++){
		printf("%d\t",A[i]);
	}	
}
 void tim (int n , int A[100]){
 	int i;
    for (i=2;i<=n;i++){
    	if ((A[i-1]*A[i])%(A[i-1]+A[i])==0){
    		printf("\n%d %d\t",A[i-1],A[i]);
		}
	}
 }
int main(){
	int n;
	int A[100];
	scanf("%d",&n);
	nhapin (n,A);
	tim (n,A);
}
