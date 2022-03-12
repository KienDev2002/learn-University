#include<stdio.h>
 
void readFile(FILE *fi, int *n, double *s){
	fscanf(fi, "%d", n);
	for(int i = 0; i < *n; i++){
		fscanf(fi, "%lf", &s[i]);
	}
}
void writeFile(FILE *fo, int n, double *s){
	fprintf(fo, "Day so vua nhap la:\n");
	for(int i = 0; i < n; i++){
		fprintf(fo, "%0.2lf ", s[i]);
	}
}
void Arg(int n, double *s){
	int dem = 0;
	double Sum = 0, a, b;
	printf("Nhap vao a va b: ");
	scanf("%lf%lf", &a, &b);
	for(int i = 0; i < n; i++){
		if(s[i] > a && s[i] < b){
			dem++;
			Sum += s[i];
		}
	}
	if(dem == 0){
		printf("Khong co so nao thuoc khoang %lf va %lf", a, b);
	}
	printf("Trung cong la: %lf", Sum/(1.0 * dem));
}
void ChanLe(int n, double *s){
	int c = 0, l = 0;
	for(int i = 0; i < n; i++){
		if(s[i] - (int)s[i] == 0){
			if((int)s[i] % 2 == 0){
				c++;
			}
			else {
				l++;
			}
		}
	}
	if(c == 0){
		printf("Khong co phan tu chan");
	}
	if(l == 0){
		printf("Khong co phan tu le");
	}
	printf("\n");
	if(c > l){
		printf("Phan tu chan nhieu hon");
	}
	else if(c < l){
		printf("Phan tu le nhieu hon");
	}
	else{
		printf("Hai phan tu co so luong bang nhau.");
	}
}
 
int main(){
	char tenfile[50];
	printf("Nhap file can doc: ");
	gets(tenfile);
 
	FILE *fi = fopen(tenfile, "r");
	FILE *fo = fopen("outdd.txt", "w");
 
	int n;
	double s[100];
 
	readFile(fi, &n, s);
	writeFile(fo, n, s);
	Arg(n, s);
	printf("\n");
	ChanLe(n, s);
 
}

