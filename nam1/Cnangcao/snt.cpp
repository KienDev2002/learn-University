#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
   int i,dem=0,n;
   scanf("%d",&n);
   if (n<2){
   	   printf("\n %d khong phai la so nguyen to",n);
   }else{
   	  for (i=2;i<=sqrt(n);i++){
   	  	     if (n%i==0){
   	  	        dem++;
			}
		}
		if (dem==0){
    		printf("\n %d la so nguyen to",n);
		}else{
			printf("\n %d khong phai la so nguyen to",n);
			}
    }
}

