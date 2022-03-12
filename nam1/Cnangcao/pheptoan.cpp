#include<stdio.h>
void pheptoan (int a , int b , char nhaptinh){
	int tong;
	switch (nhaptinh){
		case '+': {
			printf("%d",a+b);
			break;
		}
			case '-': {
			printf("%d",a-b);
			break;
		}
			case '*': {
			printf("%d",a*b);
			break;
		}
			case '/': {
			printf("%d",a/b);
			break;
		} default: {
		printf("vui long nhap lai phep toan phu hop");
	}
}
}
int main(){
	int a, b,tong;
	char nhaptinh;
	printf("nhap a va b : ");
	scanf("%d %d",&a,&b);
	printf("nhap phep toan can tinh: ");
	fflush(stdin);
	scanf("%c",&nhaptinh);
	pheptoan(a,b,nhaptinh);
}
