#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n , float **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(float*)malloc((*n)*sizeof(float)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for(int i=0;i<*n;i++){
		fscanf(p1,"%f",&(*a)[i]);
	}
}
void writefile (int n , float *a , FILE *p2){
	for (int i=0;i<n;i++){
		printf("%.2f\t",a[i]);
	}
}
void tbc (int n , float *a , FILE *p2){
	float S=0;
	float c,d;
	int dem=0;
	scanf("\n%f%f",&c,&d);
	for (int i=0;i<n;i++){
		if (a[i]>c && a[i]<d){
			S+=a[i];
			dem++;
		}
	}
	if (dem==0){
		printf("\n Khong co so nao thuoc tu a den b");
	}else{
		printf("\n TBC = %.2f",S/(1.0*dem));
	}
}
void demso(int n , float *a){
	int c=0 , l=0;
	for (int i=0;i<n;i++){
		if (a[i]-(int)a[i]==0){
			if ((int)a[i]%2==0){
				c++;
			}else{
				l++;
			}
		}
	}
	
	if (c==0){
		printf("\n khong co phan tu nao chan");
	}else if (l==0){
		printf("\n khong co phan tu nao le");
	}
	if (c>l){
		printf("\n ptu chan co sl nhieu hon le");
	}else if (l>c){
		printf("\n ptu le co sl nhieu hon chan");
	}else if (l==c){
		printf("\n ptu chan co sl bang ptu le");
	}
}
int main(){
	int n;
	float *a;
	char *b = (char*)malloc(50*sizeof(char));
	printf("\nnhap ten file can doc: ");
	gets(b);
	FILE *p1 = fopen(b,"r");
	FILE *p2 = fopen("output.txt","w");
	if (p1==NULL){
		printf("\nChua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	writefile(n,a,p2);
	tbc(n,a,p2);
	demso(n,a);
	fclose(p1);
	fclose(p2);
	free(a);
	free(b);
}

