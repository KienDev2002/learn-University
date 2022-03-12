#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TS {
	char HT[100];
	float SD;
	char DH;
};
struct TS *a;
void docfile(int *n , struct TS **a , FILE *p1 ){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TS*)malloc((*n)*sizeof(TS)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %f\n %c\n",(*a)[i].HT,&(*a)[i].SD,&(*a)[i].DH);
	}
}
void in (int n , struct TS *a, FILE *p2){
	for (int i=0;i<n;i++){
		printf("\n%-5d %-20s %10.2f %10c",i+1,a[i].HT,a[i].SD,a[i].DH);
		fprintf(p2,"\n%-5d %-20s %10.2f %10c",i+1,a[i].HT,a[i].SD,a[i].DH);
	}
}
void demmin (int n , struct TS *a, FILE *p2){
	float *b = {};
	if ((b=(float*)malloc(4*sizeof(float)))==NULL){
		printf("\nChua co bo nho");
		exit(0);
	}
	for (int i=0;i<n;i++){
		if (a[i].DH=='A')  b[0]+=a[i].SD;
		else if (a[i].DH=='B')  b[1]+=a[i].SD;
		else b[2]+=a[i].SD;	
	}
	for (int i=0;i<3;i++){
		printf("\nTong diem cua truong %c la: %.2f",i+'A',b[i]);
		fprintf(p2,"\nTong diem cua truong %c la: %.2f",i+'A',b[i]);
	}
	float min = b[0];
	for (int i=1;i<3;i++){
		if (min>b[i]){
			min =b[i];
		}
	}
	for (int i=0;i<3;i++){
		if (min==b[i]){
				printf("\nTruong %c co diem thap nhat",i+'A');
				fprintf(p2,"\nTruong %c co diem thap nhat",i+'A');
		}
	}
}
void baTS (int n , struct TS *a, FILE *p2){
	printf("\n 3 TS co diem cao nhat la: ");
	fprintf(p2,"\n 3 TS co diem cao nhat la: ");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].SD<a[j].SD){
				TS stemp = a[i];
				a[i] = a[j];
				a[j] = stemp;
			}
		}
	}
	in(3,a,p2);
}
int main(){
	int n;
	FILE *p1 = fopen("NV.txt","r") , *p2 = fopen("outde8.txt","w");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	demmin(n,a,p2);
	baTS(n,a,p2);
	int fcloseall(void);
	free(a);
}

