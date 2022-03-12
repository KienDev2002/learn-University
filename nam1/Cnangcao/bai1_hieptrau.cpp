#include<stdio.h>
#include<stdlib.h>

void nhap(int *n, int **a, FILE *p1){
	fscanf(p1,"%d",&(*n));
	*a = (int*)calloc((*n)+5,sizeof(int));
	for(int i=0;i<*n;i++) fscanf(p1,"%d",&(*a)[i]);
}

void xuat(int n, int *a, FILE *p2){
	printf("Day so vua nhap la: \n");
	fprintf(p2,"Day so vua nhap la: \n");
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
		fprintf(p2,"%4d",a[i]);
	}
}

int main(){
	FILE *p1 = fopen("inb1.txt","r"),
	*p2 = fopen("outb1.txt","w");
	int n, *a;
	nhap(&n,&a,p1);
	xuat(n,a,p2);
	return 0;
}

