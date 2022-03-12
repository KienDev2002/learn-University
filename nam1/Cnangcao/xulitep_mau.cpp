#include <stdio.h>
main()
{
	FILE *f1, *f2;
	float a,b,c;
	f1=fopen("input.txt","r"); 
	fscanf(f1,"%f%f",&a,&b);
	c=a+b;
	printf("Tong 2 so la: %f",c);
	fclose(f1);
	f1=fopen("input.txt","w");
	fprintf(f1, "\n%f",c);
	fclose(f1);
}


 


