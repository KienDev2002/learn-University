#include<stdio.h>
#include<math.h>
#include<conio.h>
int main (){
	int n;
	int mark=1;
	int i;
	printf("nhap n:");
	scanf ("%d",&n);
	if (n<=1){
		printf ("%d khong phai la so nguyen to",n);
	}
	while (n>1){
			for (i=2 ; i<=sqrt(n) ; i++){
				if (n%i==0){
					mark=0;
					break;
				}
			}
		}
		if (mark==1){
			printf ("%d la so nguyen to",n);
		}else{
			printf ("%d khong phai la so nguyen to",n);
		}
}







