#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *n , int *m , FILE *p1, FILE *p2 , float ***a){
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	fscanf(p1,"%d",&(*m));
	fscanf(p1,"%d",&(*n));
	printf("- Ma tran A co %d x %d la: \n",*m,*n);
	fprintf(p2,"- Ma tran A co %d x %d la: \n",*m,*n);
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			fscanf(p1,"%f",&(*a)[i][j]);
		}
	}
	for (int i=0;i<*m;i++){
		for (int j=0;j<*n;j++){
			printf("%.2f\t",(*a)[i][j]);
			fprintf(p2,"%.2f\t",(*a)[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
}
void tinh (int n, int m , float **a, FILE *p2){
	float S=0;
	int dem=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]<0){
				dem++;
				S+=a[i][j];
			}
		}
	}
	if (dem==0){
		printf("\nKhong co phan tu am!");
		fprintf(p2,"\nKhong co phan tu am!");
	}else{
		printf("\nTBC gia tri am la: %.2f",S/dem);
		fprintf(p2,"\nTBC gia tri am la: %.2f",S/dem);
	}
}
void timGTamLN(int m , int n , float **a , FILE *p2){
	float max=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]<0){
				max=a[i][j];
				break;
			}
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (a[i][j]<0&&max<a[i][j]){
				max=a[i][j];
			}
		}
	}
	if (max==0){
		printf("\nKhong co ptu am nao!");
		fprintf(p2,"\nKhong co ptu am nao!");
	}else{
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if (max==a[i][j]){
				printf("\nGT am LN la: %.2f nam o hang %d cot %d",a[i][j],i+1,j+1);
				fprintf(p2,"\nGT am LN la: %.2f nam o hang %d cot %d",a[i][j],i+1,j+1);
			}
		}
	}
	}
} 
int main(){
	int n,m;
	float **a=NULL;
	a=(float**)malloc(m*sizeof(float*));
	for (int i=0;i<m;i++){
		a[i]=(float*)malloc(n*sizeof(float));
	}
	FILE *p1,*p2;
	p1=fopen("matran2.txt","r");
	p2=fopen("xuatmt2.txt","w");
	docfile(&n,&m,p1,p2,&a);
	tinh(n,m,a,p2);
	timGTamLN(m,n,a,p2);
	for (int i=0;i<m;i++){
		free(a[i]);
	}
	free(a);
}

