#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool ngto (int n);
int main (){
	int a,b;
	printf ("nhap a>0 , b>0=");
	scanf ("%d%d",&a,&b);
	if (a>0&&b>0){
		for (int i=a ; i<=b ; i++){
			if (ngto(i)){
				printf ("%7d",i);
			}
		}
	}else {
		printf ("vui long nhao a,b la so duong");
	}
}
bool ngto (int n){
	int i;
	if (n<2){
		return false ;
	}else {
		for (i=2 ; i<sqrt(n) ; i++){
			if (n%i==0){
				return false;
			}
		}
	}
	return true;
}







