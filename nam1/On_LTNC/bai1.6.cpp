#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void docfile (int *m , int *n , int **a , int **b,FILE *p1){
	fscanf(p1,"%d%d\n",n,m);
	if (((*a)=(int*)malloc((*n)*sizeof(int)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
	}
	if (((*b)=(int*)malloc((*m)*sizeof(int)))==NULL){
		printf("Chua co bo nho!");
		exit(0);
	}
	for (int i=1;i<=*n;i++){
		fscanf(p1,"%d\n",&(*a)[i]);
	}
	for (int i=1;i<=*n;i++){
		printf("%d\t",(*a)[i]);
	}
	for (int i=1;i<=*m;i++){
		fscanf(p1,"%d",&(*b)[i]);
	}	
	printf("\n");
	for (int i=1;i<=*m;i++){
		printf("%d\t",(*b)[i]);
	}
}
void GTLN (int n , int m , int *a , int *b, FILE *p2){
	int max=a[1];
	for (int i=2;i<=n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	for (int i=1;i<=n;i++){
		if (max==a[i]){
			printf("\n GTLN cua a: %d\n",a[i]);
			fprintf(p2,"\n GTLN cua a: %d\n",a[i]);
		}
	}
	 max=b[1];
	for (int i=2;i<=m;i++){
		if (b[i]>max){
			max=b[i];
		}
	}
	for (int i=1;i<=m;i++){
		if (max==b[i]){
		printf("GTLN cua b: %d",b[i]);
		fprintf(p2,"\n GTLN cua b: %d",b[i]);
		}
	}
}
void sapxep(int m , int n, int *a , int *b, FILE *p2){
	int stemp;
	for (int i=1;i<=n-1;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]<a[j]){
				stemp=a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	printf("\n- a giam dan:\n");
	fprintf(p2,"\n- a giam dan:\n");
	for (int i=1;i<=n;i++){
		printf("%d\t",a[i]);
		fprintf(p2,"%d\t",a[i]);
	}
	for (int i=1;i<=m-1;i++){
		for (int j=i+1;j<=m;j++){
			if (b[i]<b[j]){
				stemp=b[i];
				b[i]=b[j];
				b[j]=stemp;
			}
		}
	}
	printf("\n- b giam dan:\n");
	fprintf(p2,"\n- b giam dan:\n");
	for (int i=1;i<=m;i++){
		printf("%d\t",b[i]);
		fprintf(p2,"%d\t",b[i]);
	}
}
int ktraa (int n , int *a){
	for (int i=1;i<=n;i++){
		if (a[i]%2!=0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m,n;
	FILE *p1= fopen("in1.6.txt","r"), *p2=fopen("out1.6.txt","w");
	int *a , *b;
	if (p1==NULL){
		printf("Chua co file!");
		exit(0);
	}
	docfile(&m,&n,&a,&b,p1);
	GTLN(n,m,a,b,p2);
	sapxep(m,n,a,b,p2);
	if (ktraa(n,a)==0){
		printf("\nDay a tat ca cac phan tu ko la chan");
		fprintf(p2,"\nDay a tat ca cac phan tu ko la chan");
	}else{
		printf("\nDay a tat ca cac phan tu  la chan");
		fprintf(p2,"\nDay a tat ca cac phan tu la chan");
	}
	if (ktraa(m,b)==0){
		printf("\nDay b tat ca cac phan tu ko la chan");
		fprintf(p2,"\nDay b tat ca cac phan tu ko la chan");
	}else{
		printf("\nDay b tat ca  la chan");
		fprintf(p2,"\nDay b tat ca la chan");
	}
	free(a);
	free(b);
	fclose(p1);
	fclose(p2);
}

