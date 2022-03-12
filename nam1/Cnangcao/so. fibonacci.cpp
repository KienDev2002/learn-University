#include <stdio.h>
#include <math.h>
void sofibonacci (int n){
	printf("\n day so dau tien cua so fibonacci la: ");
	long a=1,b=1,c;
		for (int i=0;i<n;i++){
			if (i<=1){
    			c=i;
			}else{
				c=a+b;
				a=b;
				b=c;
		}
	printf("%li , ",c);
	}
}
int main(){
	int n;
	printf("nhap n: ");
  	scanf ("%d",&n);	
  	sofibonacci(n);
}
