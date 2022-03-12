#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	 int x;
	 printf("nhap x: ");
	 scanf("%d",&x);
	 if (x<0){
	 	printf("\nVietNam");
	 }else{
	 	printf("%0.2f",(float)sqrt(x));
	 }
}

