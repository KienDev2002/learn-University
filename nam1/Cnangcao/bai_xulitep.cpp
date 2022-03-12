#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	FILE *p;
	int i;
	p=fopen("text.txt","w");
	fprintf(p,"cac dong");
	for (i=1;i<=200;i++){
		fprintf(p,"\n Dong %2d",i);
	}
	fclose(p);
}

