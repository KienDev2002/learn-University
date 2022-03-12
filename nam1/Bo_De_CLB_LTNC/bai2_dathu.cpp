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
		fscanf(p1,"%f\n %f\n %f\n",&(*a)[i].Toan,&(*a)[i].V,&(*a)[i].A);
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
	float max =-1;
	for (int i=0;i<n;i++){
		if (max<a[i].TB){
			max = a[i].TB;
		}
	}
	for (int i=0;i<n;i++){
		if (max==a[i].TB){
			if (a[i].T=='A')  b[0]++;
			else if (a[i].T=='B')  b[1]++;
			else b[2]++;
		}
	}
	int m = 0;
	for (int i=0;i<3;i++){
		m = m > b[i]?m:b[i];
	}
	for (int i=0;i<n;i++){
		if (m==b[i]){
			printf("\n Truong co nhieu thu khoa nhat la: %c",i+'A');
		}
	}
	printf("\n Co %d thu khoa cua truong do",m);
}
void DTB (int n, struct TS *a){
	float d[3]={};
	int e[3]  = {};
	for (int i=0;i<n;i++){
		if (a[i].T=='A'){
			d[0]+=a[i].TB;
			e[0]++;
		}else if (a[i].T=='B'){
			d[1]+=a[i].TB;
			e[1]++;
		}else{
			d[2]+=a[i].TB;
			e[2]++;
		}
	}
	float m=0;
	for (int i=0;i<3;i++){
		d[i]=d[i]/e[i];
		m = d[i]>m?d[i]:m;
	}
	for (int i=0;i<3;i++){
		if (d[i]==m){
				printf("\n Truong co diem TB cao nhat la: %c",i+'A');
		}
	}
}
void dodaihoc (int n , struct TS *a){
	float d;
	int ok=0;
	printf("\nnhap diem san:");
	scanf("%f",&d);
	printf("Nhung thi sinh do dai hoc la:");
	for (int i=0;i<n;i++){
		if (a[i].TB>=d && a[i].Toan>1 && a[i].V>1 && a[i].A>1){
			printf("\n%-10s %-20s %-5c %-7.2f %-7.2f %-7.2f %7.2f",a[i].M,a[i].HT,a[i].T,a[i].Toan,a[i].V,a[i].A,a[i].TB);
			ok =1;
		}	
	}
		if(ok == 0) printf("Khong co sv nao ddh!");
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

