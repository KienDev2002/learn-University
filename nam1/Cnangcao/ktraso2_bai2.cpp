#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	
}; 
void docfile(int *n , FILE *p1 ,struct  SV *a){
	fscanf(p1,"%d\n",&(*n));
	printf("Co %d sinh vien: \n",*n);
	int i=0;
	struct SV b;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %f\n",b.ten,b.truong,&b.SD);
		a[i++]=b;
		if (feof(p1)) break;
	}
}
int main(){
	int n;
	FILE *p1 ,*p2;
	struct SV *a=(SV*)malloc((n)*sizeof(SV));
	p1=fopen("input.txt","r");
	p2=fopen("output.txt","w");
	if (p1==NULL){
		printf("\nKhong tim thay file!");
	}
	docfile(&n,p1,a);
//	xuat(n,a,p2);
}

