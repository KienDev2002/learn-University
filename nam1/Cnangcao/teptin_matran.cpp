#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docinmatran(int m , int n , FILE *p1, float a[100][100] , FILE *p2){
	p1=fopen("inputmatran.txt","r");
	if (p1==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	fscanf(p1,"%d",&m);
	fscanf(p1,"%d",&n);
	printf("- Ma tran co %d hang %d cot: \n",m,n);
	p2=fopen("outputmatran.txt","w");
	fprintf(p2,"- Ma tran co %d hang %d cot: \n",m,n);
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			fscanf(p1,"%f",&a[i][j]);
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("%.2f\t",a[i][j]);
			fprintf(p2,"%.2f\t",a[i][j]);
		}
		printf("\n");
		fprintf(p2,"\n");
	}
	int dem=0;
	float S=0;
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			if(a[i][j]<0){
				S+=a[i][j];
				dem++;
			}
		}
	}
	if (dem==0){
		printf("\nKhong co phan tu nao am!");
	}else{
		printf("\nTBC cua cac gia tri am la: %.2f",S/dem);
		fprintf(p2,"\nTBC cua cac gia tri am la: %.2f",(S/dem));	
	}
	float max;
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
			if (a[i][j]<0 && a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
				if (max==a[i][j]){
					printf("\ngia tri am lon nhat la: %.2f nam o hang %d cot %d",a[i][j],i+1,j+1);
					fprintf(p2,"\ngia tri am lon nhat la: %.2f nam hang %d cot %d",a[i][j],i+1,j+1);
				}
			}
		}
	fclose(p1);
	fclose(p2);
}
int main(){
	int m,n;
	FILE *p1,*p2;
	float a[100][100];
	docinmatran(m,n,p1,a,p2);
}

