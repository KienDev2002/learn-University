 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct mh {
	char T[50];
	char CD[50];
	int SL;
	float GT;
};
struct mh *a;
void docfile(int *n , struct mh **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(mh*)malloc((*n)*sizeof(mh)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	int i=0;
	for (;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n %f\n",(*a)[i].T,(*a)[i].CD,&(*a)[i].SL,&(*a)[i].GT);
		i++;
		if(feof(p1))   break;
	};
}
void in(int n , struct mh *a, FILE *p2){
	for (int i=0;i<n;i++){
		fprintf(p2,"\n%-5d %-20s %-10s %-10d %-10.2f",i+1,a[i].T,a[i].CD,a[i].SL,a[i].GT);
			printf("\n%-5d %-20s %-10s %-10d %-10.2f",i+1,a[i].T,a[i].CD,a[i].SL,a[i].GT);
	}
}
double tinh(int n , struct mh *a ){
	float S=0;
	for (int i=0;i<n;i++){
		S+=a[i].GT;
	}
	return S;
}
void SapXep(struct mh *a, int n , FILE *p2){
	printf("\n");
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].GT > a[j].GT){
				mh tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}else if (a[i].GT==a[j].GT && a[i].SL>a[j].SL){
				mh stemp = a[i];
				a[i] = a[j];
				a[j]= stemp;
			}
		}
	}
	in(n,a,p2);
}
int main(){
	int n;
	FILE *p1 = fopen("mh.txt","r") , *p2= fopen("cau2.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	printf("\n%.2lf",tinh(n,a));
	SapXep(a,n,p2);
	fclose(p1);
	fclose(p2);
	free(a);
}

