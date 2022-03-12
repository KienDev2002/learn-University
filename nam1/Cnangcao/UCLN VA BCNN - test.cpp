#include<stdio.h>
void UCLN (int a, int b){
	int bc;
	if (a==0&&b==0){
		printf("khong co UCLN va BCNN");
	}else if (a==0||b==0) {
		if (a==0)  printf("khong co BCNN UCLN = %d",b);
		else printf("khong co BCNN UCLN = %d",a);
	}else{
	 bc=a*b;
		while (a!=b){
		if (a>b)  a=a-b;
		else b=b-a;	
		}
	}
	printf(" UCLN = %d",a);
	printf(" BCNN = %d",bc/a);
}
int main(){
	int a,b;
    printf("nhap a= ");
    scanf("%d",&a);
    printf("nhap b= ");
    scanf("%d",&b);  
	UCLN (a,b);
}
