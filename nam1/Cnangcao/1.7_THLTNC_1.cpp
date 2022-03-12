#include<stdio.h>
#include<math.h>
#include<string.h>
int demchuso (int n){
	int dem=1;
	while (n>=10){
		n/=10;
		dem++;
	}
	return dem;
}
int sodau (int n){
	while(n>=10){
		n/=10;
	}
	return n;
}
int socuoi (int n){
	n=n%10;
	return n;
}
int tongchuso (int n){
	int tong=0;
	while (n>0){
		tong=tong+(n%10);
		n/=10;
	}
	return tong;
}
int sodaonguoc (int n){
	int last,top=0;
	while (n>0){
		last=n%10;
		top=top*10+last;
		n/=10;
	}
	return top;
}
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	printf("%d co %d chu so",n,demchuso(n));
	printf("\n%d co chu so dau tien la: %d",n,sodau(n));
	printf("\n%d co chu so cuoi cung la: %d",n,socuoi(n));
	printf("\ntong cac chu so: %d",tongchuso(n));
	printf("\nso dao nguoc la: : %d",sodaonguoc(n));
	printf("\n%d co %d chu so",n,demchuso(n));
}

