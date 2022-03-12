#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct DaThuc{
	int n;
	double *s;
};
void Read(FILE *fi, DaThuc *a){
	fscanf(fi, "%d", &(*a).n);
	(*a).s = (double*)malloc(((*a).n + 5) * sizeof(DaThuc));
	for(int i = 0; i <= (*a).n; i++){
		fscanf(fi, "%lf", &((*a).s[i]));
	}
}
void Write(FILE *fo, DaThuc a){
	fprintf(fo, "Da thuc vua doc duoc la:\n");
	fprintf(fo, "%.2lf", a.s[0]);
	for(int i = 1; i <= a.n; i++){
		if(a.s[i] > 0)
			fprintf(fo, " + %.2lf*x^%d", a.s[i], i);
		if(a.s[i] < 0){
			fprintf(fo, " - %.2lf*x^%d", fabs(a.s[i]), i);
		}
	}
}
void Daoham(DaThuc a){
	printf("Dao ham cua da thuc a la:\n");
	printf("%lf", a.s[1]);
	for(int i = 2; i <= a.n; i++){
		if(a.s[i] > 0)
			printf(" + %.2lf*x^%d", a.s[i] * i, i - 1);
		if(a.s[i] < 0){
			printf(" - %.2lf*x^%d", fabs(a.s[i] * i), i - 1);
		}
	}
}
void Tich(DaThuc a, DaThuc b){
	DaThuc c;
	c.n = a.n + b.n;
	c.s = (double*)calloc((c.n + 5) , sizeof(DaThuc)); 
	for(int i = 0; i <= a.n; i++){
		for(int j = 0; j <= b.n; j++){
			c.s[i+j] += a.s[i] * b.s[j];   //i = 1; j = 2 +> x^1 * x^2.  i = 2 j =1; x^2 * x^1
		}
	}
	printf("%.2lf", c.s[0]);
	for(int i = 1; i <= c.n; i++){
		if(c.s[i] > 0)
			printf(" + %.2lf*x^%d", c.s[i], i);
		if(c.s[i] < 0){
			printf(" - %.2lf*x^%d", fabs(c.s[i]), i);
		}
	}
}
int main(){
	FILE *fi = fopen("dathuc72.txt", "r");
	FILE *fo = fopen("dathuc.txt", "w");
	DaThuc a, b;
	Read(fi, &a);
	Write(fo, a);	
	Daoham(a);
	printf("\nNhap da thuc B:\n");
	printf("Nhap ba cua da thuc B: ");
	scanf("%d", &b.n);
	b.s = (double*)malloc((b.n + 5) * sizeof(DaThuc));
	printf("Nhap vao he so cua da thuc: ");
	for(int i = 0; i <= b.n; i++){
		scanf("%lf", &b.s[i]);
	}
	Tich(a,b);
 
 
	fclose(fi);
	fclose(fo);
}

