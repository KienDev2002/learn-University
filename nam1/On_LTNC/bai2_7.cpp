 #include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct cty {
	char MNV[50];
	char HT[50];
	int L;
	 char P[50];
};
struct cty *a;
void docfile(int *n , struct cty **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if (((*a)=(cty*)malloc((*n)*sizeof(cty)))==NULL){
		printf("chua co bo nho");
		exit(0);
	}
	for (int i=0;i<*n;i++){
		fscanf(p1,"%[^\n]\n %[^\n]\n %d\n %[^\n]\n",(*a)[i].MNV,(*a)[i].HT,&(*a)[i].L,(*a)[i].P);
	}
}
void in(int n , struct cty *a, FILE *p2){
	for (int i=0;i<n;i++){
			fprintf(p2,"\n%-5d %-20s %-10s %-10d %-10s",i+1,a[i].MNV,a[i].HT,a[i].L,a[i].P);
			printf("\n%-5d %-20s %-10s %-10d %-10s",i+1,a[i].MNV,a[i].HT,a[i].L,a[i].P);
	}
}
void tinh (int n , struct cty *a , FILE *p2){
	float *luong = (float*)calloc(4,sizeof(float));
	int d=0,dd=0,dem=0;
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].P,"A")==0) luong[0]+=a[i].L , d++;
		else if (strcmpi(a[i].P,"B")==0)  luong[1]+=a[i].L , dd++;
		else luong[2]+=a[i].L , dem++;
	}
		printf("\nLuong trung binh cua phong A la: %.2f",luong[0]/d);
		printf("\nLuong trung binh cua phong B la: %.2f",luong[1]/dd);
		printf("\nLuong trung binh cua phong C la: %.2f",luong[2]/dem);
		float min = luong[0];
		for (int i=1;i<3;i++){
			if (luong[i]<min){
				min = luong[i];
			}
		}
		for (int i=0;i<3;i++){
			 if (min==luong[i]){
			 	printf("\nLuong TB thap nhat la phong: %c",i+'A');
		}	
}
}
void sapxep (int n , struct cty *a , FILE *p2){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (a[i].L<a[j].L){
			cty stemp = a[i];
			a[i] = a[j];
			a[j] = stemp;
			}
		}
	}
	in (n,a,p2);
}
int main(){
	int n;
	FILE *p1 = fopen("cty.txt","r") , *p2= fopen("2_7.txt","w");
	if (p1==NULL){
		printf("chua co file");
		exit(0);
	} 
	docfile(&n,&a,p1);
	in(n,a,p2);
	tinh(n,a,p2);
	sapxep(n,a,p2);
	fclose(p1);
	fclose(p2);
	free(a);
}

