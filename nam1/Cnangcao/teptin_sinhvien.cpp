#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct ds{
	char ten[30];
	char truong[10];
	float diem;	
}ds[100];
void nhap(FILE *p1,int &n,struct ds ds[100]);
void in(FILE *p2,int n,struct ds ds[100]);
int main(){
	int n;
	FILE *p1 = fopen("inputStruct.txt","r"),
	*p2 = fopen("outputStruct.txt","w");
	nhap(p1,n,ds);
	in(p2,n,ds);
	return 0;
}
void nhap(FILE *p1, int &n, struct ds ds[100]){
//	fscanf(p1,"%d\n",&n);
//	int i=0;
//	struct ds a;
//	for(;;){
//		fscanf(p1,"%[^\n]\n %[^\n]\n %f\n",a.ten,a.truong,&a.diem);
//		ds[i++]=a;
//		if(feof(p1)) break;
//	}
	fscanf(p1,"%d\n",&n);
	int i=0;
	struct ds b;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %f\n",b.ten,b.truong,&b.diem);
		ds[i++]=b;
		if (feof(p1)) break;
	}
}

void in(FILE *p2, int n, struct ds ds[100]){
	printf("Danh sach sinh vien:\n");
	fprintf(p2,"Danh sach sinh vien:\n");
	printf("%6s %30s %20s %17s\n","STT","Ho ten","Truong","Diem");
	fprintf(p2,"%6s %30s %20s %17s\n","STT","Ho ten","Truong","Diem");
	for(int i=0;i<n;i++){
		printf("%6d %30s %20s %17.1f\n",i+1,ds[i].ten,ds[i].truong,ds[i].diem);
		fprintf(p2,"%6d %30s %20s %17.1f\n",i+1,ds[i].ten,ds[i].truong,ds[i].diem);
	}
}
