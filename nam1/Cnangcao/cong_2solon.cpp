#include<stdio.h>
#include<math.h>
#include<string.h>
long cong (char *a , char *b){
	int nho=0;
	long tong;
	while (*a>*b){
		*a='0'+*a;
	}
	while (*a<*b){
		*b='0'+*b;
	}
	int len=a[100];
	for (int i=a[100];i>=0;i--){
		int so= (int)(a[i]-'0'+b[i]-'0'+nho);
		tong =(so%10)+tong;
		nho=so/10;
	}
	if (nho>0){
		tong = nho + tong;
	}
	return tong;
}
int main(){
	char a[100];
	gets(a);
	char b[100];
	gets(b);
	printf("tong = %li",cong(a,b));
}

