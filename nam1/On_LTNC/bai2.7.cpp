#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct NV {
	char MNV [20];
	char HT[20];
	long L;
	char P[20];
};
struct NV *a;
void docfile(int *n , struct **a , FILE *p1){
	if (((*a)=(NV*)malloc((*n)*sizeof(NV)))==NULL){
		printf("chua co bo nho!");
		exit(0);
	}
	fscanf(p1,"%d\n",n);
	int i=0;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %li\n %[^\n]\n ",a[i].MNV,a[i].MT,&a[i].L,a[i].P);
		i++;
		if (feof(p1)) break;
	}
}
int main(){
	int n;
	FILE *p1=fopen("input.txt","w");
}

