#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TS {
	char M[12];
	char HT[12];
	char T;	
	float Toan,V,A,TB;
};
struct TS *a;
void docfile(int *n , struct TS **a, FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(TS*)malloc((*n)*sizeof(TS)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n",(*a)[i].M);
		fscanf(p1,"%[^\n]\n",(*a)[i].HT);
		fscanf(p1,"%c\n",&(*a)[i].T);
		fscanf(p1,"%f\n",&(*a)[i].Toan);
		fscanf(p1,"%f\n",&(*a)[i].V);
		fscanf(p1,"%f\n",&(*a)[i].A);
		(*a)[i].TB = (*a)[i].Toan+(*a)[i].V+(*a)[i].A;
	}
}
void in(int n , struct TS *a, FILE *p2){
	for (int i=0;i<n;i++){
		fprintf(p2,"\n%-10s %-20s %-5c %-7.2f %-7.2f %-7.2f %7.2f",a[i].M,a[i].HT,a[i].T,a[i].Toan,a[i].V,a[i].A,a[i].TB);
		printf("\n%-10s %-20s %-5c %-7.2f %-7.2f %-7.2f %7.2f",a[i].M,a[i].HT,a[i].T,a[i].Toan,a[i].V,a[i].A,a[i].TB);
	}
}
void thukhoa (int n , struct TS *a){
	int b[4]={};
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].TB < a[j].TB){
				TS tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("\nLay 3 thi sinh thu khoa:");
	for (int i=0;i<3;i++){
		if (a[i].T=='A'){
			b[0]++;
		}else if (a[i].T=='B'){
			b[1]++;
		}else if (a[i].T=='C'){
			b[3]++;
	}
}
	int max= b[0];
	for (int i=1;i<4;i++){
		if (b[i]>max){
			max=b[i];
		}
	}
	for (int i=0;i<4;i++){
		if (max==b[i]){
			printf("\nTruong co nhieu thu khoa nhat la: %c co %d thu khoa",i+'A',max);
			}
		}
}
void DTB (int n, struct TS *a){
	float max = a[0].TB;
	for (int i=1;i<n;i++){
		if (max<a[i].TB){
			max= a[i].TB;
		}
	}
	for (int i=0;i<n;i++){
		if (max==a[i].TB){
				printf("\nTruong co DTB cao nhat la: %c",a[i].T);
			}
		}
}
void dodaihoc (int n , struct TS *a){
	float d;
	printf("\nnhap diem san:");
	scanf("%f",&d);
	printf("Nhung thi sinh do dai hoc la:");
	for (int i=0;i<n;i++){
		if (a[i].TB>=d && a[i].Toan>1 && a[i].V>1 && a[i].A>1){
			printf("\n%-10s %-20s %-5c %-7.2f %-7.2f %-7.2f %7.2f",a[i].M,a[i].HT,a[i].T,a[i].Toan,a[i].V,a[i].A,a[i].TB);
		}	
	}
}
int main(){
	int n;
	FILE *p1 = fopen("bai2_dathuc.txt","r") , *p2= fopen("dathu27_2.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	thukhoa(n,a);
	DTB (n,a);
	dodaihoc(n,a);
	int fcloseall (void);
	free(a);
}

