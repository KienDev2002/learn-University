#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
  	char *a;
  	gets(a);
  	char *p=a;
  	for (p=a;p<a+strlen(a);p++){
  		printf("%s",*p);
	 	}
	}

