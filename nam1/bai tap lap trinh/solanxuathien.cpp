#include<stdio.h>
#include<math.h>
#include<string.h>

void dem (char *s ){
	char str[49];
	char *p=s;
	strcpy(str,"abcdefghijklmpnoqrstuvxywzABCDEFGHIKLMNOPQRSTVXYZ");
	int kt[49]={};
	for (p=s;p<s+strlen(s);p++){
		for (int j=0;j<49;j++){
			if (*p==str[j]){
				kt[j]++;
			}
		}
	}
	for (int i=0;i<49;i++){
		printf("\n  %c xuat hien %d lan",str[i],kt[i]);
	}
}
int main (){
	char s[100];
	printf("nhap tu: ");
	gets(s);
	dem(s);
}





















