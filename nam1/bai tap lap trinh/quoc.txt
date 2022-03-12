#include<bits/stdc++.h>
void docfile(FILE *p1,int**a,int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			fscanf(p1,"%d",&a[i][j]);
		}
	}
}
void xuat(FILE *p2,int **a,int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			fprintf(p2,"%5d",a[i][j]);
		}
		printf("\n");
	}
}
void TBCam(FILE *p2,int **a,int m,int n ){
	float s=0;
	int dem=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]<0){
				s=s+a[i][j];
				dem++;
			}
		}
	}
	fprintf(p2,"TBC cac phan tu am la :%.2f",s/(1.0*dem));
}
void ammax(FILE *p2,int **a,int m,int n){
	int max=-999999,cot,hang;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				hang=i;
				cot=j;
			}
		}
	}
	fprintf(p2,"\nGia tri am lon nhat cua ma tran la:%.2f",max);
	fprintf(p2,"\n Vi tri cua phan tu am lon nhat la:a[%d][%d]",hang,cot);
}
int main(){
	int **a;
	int m,n;
	FILE *p1=fopen("input1.2.txt","r"),*p2=fopen("output1.2.txt","w");
	if(p1==NULL){
		printf("Khong tim thay FILE!!");
		exit(0);
	}
	fscanf(p1,"%d%d",&m,&n);
	if((a=(int**)calloc(m+1,sizeof(int)))==NULL){
		printf("Khong du bo nhi!!");
		exit(0);
	}
	for(int i=0;i<m;i++){
	if((a[i]=(int*)calloc(n+1,sizeof(int)))==NULL){
		printf("Khong cap phat duoc bo nho !!");
		exit(0);
	}
}
	int x;
	do{
		printf("1.docfile\n2.TBC phan tu am\n3.Phan tu co gia tri am max\n");
		scanf("%d",&x);
		if(x==1){
			docfile(p1,a,m,n);
			xuat(p2,a,m,n);
			xuat(stdout,a,m,n);
		}
		if(x==2){
			TBCam(p2,a,m,n);
			TBCam(stdout,a,m,n);
		}
		if(x==3){
			ammax(p2,a,m,n);
			ammax(stdout,a,m,n);
		}
		if(x==4){
			exit(0);
		}
	}while(true);
	fclose(p1),fclose(p2);
	free(a);
}

