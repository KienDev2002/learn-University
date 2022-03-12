#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	char HT[100];
	char Q[100];
	char HL;
};
struct SV *a;
void docfile (int *n , struct SV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(SV*)malloc((*n)*sizeof(SV)))==NULL){
		printf("Chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %c\n",(*a)[i].HT,(*a)[i].Q,&(*a)[i].HL);
	}
}
void in (int n , struct SV *a){
	for (int i=0;i<n;i++){
		printf("\n%-5d %-20s %10s %10c",i+1,a[i].HT,a[i].Q,a[i].HL);
	}
}
void tim (int n , struct SV *a){
	char *c;
	if ((c=(char*)malloc(30*sizeof(char)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	printf("\nNhap ten ktra:");
	gets(c);
	int ok=0;
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].HT,c)==0){
			ok =1;
			printf("\n%-5d %-20s %10s %10c",i+1,a[i].HT,a[i].Q,a[i].HL);	
		}
	}
	if (ok==0){
		printf("\nKhong co sinh vien nao ten la: %s",c);
	}
}
int main(){
	int n;
	FILE *p1 = fopen("SV.txt","r") , *p2 = fopen ("outbai6.txt","w");
	if (p1 == NULL){
		printf("chua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	tim(n,a);
	int fcloseall(void);
	free(a);
}

