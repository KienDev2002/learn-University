#include<stdio.h>
#include<math.h>
#include<string.h>
int demsolan (char *s){
	char str[49];
	char *p=s;
	strcpy(str,"abcdefghijklmpnoqrstuvxywzABCDEFGHIKLMNOPQRSTVXYZ");
	int f[49]={};
	for (p=s;p<s+strlen(s);p++){
		for (int j=1;j<50;j++){
			if (*p==str[j]){
			}
		}
	}
	for (int i=1;i<50;i++){
		printf("\nso lan xuat hien cua %c la: %d",str[i],f[i]);
	}
}
int main(){
	char s[100];
	gets(s);
	demsolan(s);
}

