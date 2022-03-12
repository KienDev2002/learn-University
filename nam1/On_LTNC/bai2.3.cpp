#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct Sach{
	char T[50];
	long NXB;
	long gia;
};
struct Sach *a;
void docfile (struct Sach **a , int *n , FILE *p1){
	fscanf(p1,"%d\n",n);
	if ((*a=(Sach*)malloc((*n)*sizeof(Sach)))==NULL){
		printf("chua co bo nho!");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %li\n %li\n",(*a)[i].T,&(*a)[i].NXB,&(*a)[i].gia);
	}
}
void tinh (int n , struct Sach *a, FILE *p2){
	printf("\n Thong ke cac sach: ");
	fprintf(p2,"\n Thong ke cac sach: ");
	printf("\n %-10s %-30s %-30s %-20s","STT","Ten Sach","Nam Xuat Ban","Gia");
	fprintf(p2,"\n %-10s %-30s %-30s %-20s","STT","Ten Sach","Nam Xuat Ban","Gia");
	for (int i=0 ; i<n ; i++){
			printf("\n %-10d %-30s %-30li %-20li",i+1,a[i].T,a[i].NXB,a[i].gia);
			fprintf(p2,"\n %-10d %-30s %-30li %-20li",i+1,a[i].T,a[i].NXB,a[i].gia);
	}
	long S=0;
	int dem=0;
	for (int i=0;i<n;i++){
		if (2011<=(a[i].NXB)&&(a[i].NXB)<=2013){
			dem++;
			S+=a[i].gia;
		}
	}
	if (dem==0){
		printf("\nKhong co sach nao co NXB nay");
		fprintf(p2,"\nKhong co sach nao co NXB nay");
	}else{
		printf("\n TBC= %li",S/dem);
		fprintf(p2,"\n TBC= %li",S/dem);
	}
}
void ktra (int n , struct Sach *a, FILE *p2 , char *s){
	 long money;
	 int dem=0;
	if ((s = (char*)malloc(30*sizeof(char)))==NULL){
		printf("chua co bo nho!");
		exit(0);
	}
	 printf("\nNhap Ten sach : ");
	 fflush(stdin);
	 gets(s);
	 printf("\nNhap gia tien: ");
	 scanf("%li",&money);
	 for (int i=0;i<n;i++){
	 	if ((strcmpi(a[i].T,s)==0)&& (a[i].gia==money)){
	 		dem++;
	 		printf("\nCo trong ds");
	 		fprintf(p2,"\nCo trong ds");
		 }
	 }
	 if (dem==0){
	 	printf("\nKhong Co trong ds");
	 	fprintf(p2,"\nKhong Co trong ds");
	 }
}
void sapxep (int n , struct Sach *a, FILE *p2){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].gia>a[j].gia){
				Sach stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	printf("\n Thong ke cac sach tang dan theo gia: ");
	fprintf(p2,"\n Thong ke cac sach tang dan theo gia: ");
	printf("\n %-10s %-30s %-30s %-20s","STT","Ten Sach","Nam Xuat Ban","Gia");
	fprintf(p2,"\n %-10s %-30s %-30s %-20s","STT","Ten Sach","Nam Xuat Ban","Gia");
	for (int i=0 ; i<n ; i++){
			printf("\n %-10d %-30s %-30li %-20li",i+1,a[i].T,a[i].NXB,a[i].gia);
			fprintf(p2,"\n %-10d %-30s %-30li %-20li",i+1,a[i].T,a[i].NXB,a[i].gia);
	}
}
int main(){
	int n;
	char  *s;
	FILE *p1=fopen("Sach.txt","r"),*p2=fopen("out2.3.txt","w");
	if (p1==NULL){
		printf("chua co file!");
		exit(0);
	}
	docfile(&a,&n,p1);
	tinh(n,a,p2);
	ktra(n,a,p2,s);
	sapxep(n,a,p2);
	fclose(p1);
	fclose(p2);
}

