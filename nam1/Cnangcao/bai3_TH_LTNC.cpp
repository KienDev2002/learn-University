#include<stdio.h>
#include<math.h>
#include<string.h>
#define size 100
#include<stdlib.h>
int check (char *s ){
	char *p=s;
	for (p=s;p<s+strlen(s);p++){
		if (*p>'0'&&*p<'9'){
			return 1;
		}else{
			return 0;
		}
	}
}
int demtu (char *s){
	int dem=0;
	char *p=s;
	for (p=s;p<s+strlen(s);p++){
		if (*p==' '){
			dem++;
		}
	}
	return dem+1;
}
void right (char *s){
	char *p=s;
	int n;
	printf("\nnhap n ki tu: ");
	scanf("\n%d",&n);
	for (p=s+(strlen(s)-n);p<s+strlen(s);p++){
		printf("%c",*p);
	}
}
void left (char *s){
	char *p=s;
	int n,m;
	printf("\nnhap vi tri thu m: ");
	scanf("\n%d",&m);
	printf("nhap n ki tu ban dau: ");
	scanf("\n%d",&n);
	for (p=s+m;p<s+(m+n);p++){
				printf("%c",*p);
	}
}
int main(){
	char *s = (char*)malloc(size*sizeof(char));
	gets(s);
	if (check(s)==1){
		printf("xau s la mot chuoi so");
	}else{
		printf("xau s khong phai la mot chuoi so");
	}
	printf("\nxau co %d tu",demtu(s));
	right(s);
	left(s);
	free(s);
}

