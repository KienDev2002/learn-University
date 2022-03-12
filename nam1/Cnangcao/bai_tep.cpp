#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	FILE *f1,*f2;
	float a,b,c;
	f1=fopen("input.txt","r");
	fscanf(f1,"%f%f",&a,&b);
	c=a+b;
	printf("\n tong 2 so la: %f",c);
	f2=fopen("output.txt","w");
	fprintf(f2,"%f",c);
	fclose(f1);
	fclose(f2);
}


