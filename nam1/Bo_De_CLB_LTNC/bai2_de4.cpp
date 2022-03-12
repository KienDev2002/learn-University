#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct NV {
	char HT[100];
	float L;
	int M;
};
struct NV *a;
void docfile (int *n , struct NV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a) = (NV*)malloc((*n)*sizeof(NV)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %f\n %d\n",(*a)[i].HT,&(*a)[i].L,&(*a)[i].M);
	}
}
void in (int n , struct NV *a){
	for (int i=0;i<n;i++){
		printf("\n%-5d %-20s %10.2f %10d",i+1,a[i].HT,a[i].L,a[i].M);
	}
}
void sapxep (int n , struct NV *a){
	printf("\nSap xep luong giam:");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].L<a[j].L){
				NV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	in (n,a);
}
int main(){
	int n;
	FILE *p1 = fopen("NV.txt","r");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a);
	sapxep(n,a);
	int fcloseall(void);
	free(a);
}

