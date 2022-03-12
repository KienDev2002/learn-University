#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	char ten[50];
	char truong[50];
	float SD;
};
void docfile(int *n , FILE *p1 ,struct  SV *a){
	int i=0;
	struct SV b;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %f\n",b.ten,b.truong,&b.SD);
		a[i++]=b;
		if (feof(p1)) break;
	}
}
void xuat (int n ,struct SV *a,FILE *p2){
	for (int i=0;i<n;i++){
		fprintf(p2,"\n%-10d %-30s %-20s %-10.2f",i+1,a[i].ten,a[i].truong,a[i].SD);
	}
}
void sapxepten(int n , struct SV *a , FILE *p2){
	printf("\n sap xep:");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmpi(a[i].ten,a[j].ten)>0){
				SV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	xuat(n,a,stdout);
}
float Tong (int n , FILE *p2 , struct SV *a){
 	float *diem = (float*)calloc(n,sizeof(float));
 	*diem={};
 	int d=0,dd=0,dem=0;
 	for (int i=0;i<n;i++){
 		if (strcmpi(a[i].truong,"A")==0)  diem[0]+=a[i].SD ,dem ++;
 		else if (strcmpi(a[i].truong,"B")==0)  diem[1] += a[i].SD ,d++;
 		else diem[2]+=a[i].SD ,dd++;
	 }
		printf("\n Diem cua truong A la: %.2f",diem[0]/dem);
		printf("\n Diem cua truong B la: %.2f",diem[1]/d);
		printf("\n Diem cua truong C la: %.2f",diem[2]/dd);
	float max = diem[0];
	for (int i=1;i<3;i++){
		if (diem[i]>max){
			max=diem[i];
		}
	}
	printf("\n Truong diem cao nhat la: ");
	for (int i=0;i<3;i++){
		if (diem[i]==max){
			printf("%c",i+65);
		}
	}
}
void diemcaonhat (int n, FILE *p2, struct SV *a){
	float max=0;
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].truong,"A")==0){
		max= a[i].SD>max?a[i].SD:max;
		}
	}
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].truong,"A")==0 && max == a[i].SD){
		printf("\n%-10d %-30s %-20s %-10.2f",1,a[i].ten,a[i].truong,a[i].SD);
		}
	}
}
void timsv (int n, FILE *p2 , struct SV *a){
	int dem=0,i=0,luui;
	printf("\nNhap ten 1 sinh vien can tim la: ");
	char *name = (char*)malloc(30*sizeof(char));
	fflush(stdin);
	gets(name);
	fprintf(p2,"Nhap sinh vien %5s can kiem tra tu ban phim \n",name);
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].ten,name)==0){
			dem++;
			luui=i;
		}
	}
	if (dem==0){
		printf("\nSinh vien nay khong co trong danh sach");
		fprintf(p2,"\nSinh vien nay khong co trong danh sach");
	}else{
	printf("\nSinh vien %5s co trong danh sach : \n",name);
	fprintf(p2,"\nSinh vien %5s co trong danh sach : \n",name);
	printf("\n%-10s %-30s %-20s %-10s","STT","Ho Ten","Truong","So Diem\n");
	fprintf(p2,"\n%-10s %-30s %-20s %-10s","STT","Ho Ten","Truong","So Diem\n");
	printf("\n%-10d %-30s %-20s %-10.2f",i+1,a[luui].ten,a[luui].truong,a[luui].SD);
	fprintf(p2,"\n%-10d %-30s %-20s %-10.2f",i+1,a[luui].ten,a[luui].truong,a[luui].SD);
	}
}
int main(){
	int n;
	FILE *p1 ,*p2;
	p1=fopen("sv.txt","r");
	p2=fopen("svout.txt","w");
	if (p1==NULL){
		printf("\nKhong tim thay file!");
	}
	fscanf(p1,"%d\n",&n);
	struct SV *a=(SV*)malloc((n)*sizeof(SV));
	docfile(&n,p1,a);
	xuat(n,a,p2);
	sapxepten(n,a,p2);
	Tong(n,p2,a);
	diemcaonhat(n,p2,a);
	timsv(n,p2,a);
	free(a);
}

