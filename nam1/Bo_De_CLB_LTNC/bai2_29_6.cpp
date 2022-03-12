#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct ksv{
	char hoDem[30], ten[30], quequan;
	float t, l, h, td=0;
};
struct sl{
	char que;
	int slsv = 0;
};
void input(FILE *fi, ksv **psv, int *pn){
	fscanf(fi, "%d\n", pn);
	(*psv) = (ksv*) calloc (*pn, sizeof(ksv));
	for(int i=0;i<*pn;++i){
		fscanf(fi, "%[^\n]\n%[^\n]\n%c\n", &(*psv)[i].hoDem, &(*psv)[i].ten, &(*psv)[i].quequan);
		fscanf(fi, "%f%f%f\n", &(*psv)[i].t, &(*psv)[i].l, &(*psv)[i].h);
		(*psv)[i].td = (*psv)[i].t + (*psv)[i].l + (*psv)[i].h;
	}
}
void output(FILE *fo, ksv *sv, int n){
	for(int i=0;i<n;++i){
		fprintf(fo,"%s %s\t%c\t%.1f\t%.1f\t%.1f\n", sv[i].hoDem, sv[i].ten, sv[i].quequan, sv[i].t, sv[i].l, sv[i].h);	
	}
}
void tong(ksv *a, int n){
	float max = 0;
	for(int i=0; i<n;i++){
		float t = a[i].t + a[i].l + a[i].h;
		printf("\n%s %s Co tong diem la: %.2f", a[i].hoDem, a[i].ten, t);
		max = t < max ? max : t;
	}
	for(int i = 0;i<n;i++){
		if(a[i].t + a[i].h + a[i].l == max)
		printf("\n%s %s\t%c\t%.1f\t%.1f\t%.1f\n", a[i].hoDem, a[i].ten, a[i].quequan, a[i].t, a[i].l, a[i].h);	
	}
} 
void sx(ksv *a, int n){
	for(int i=0;i<n;i++){
		for(int j = i+1; j<n;j++){
			if(strcmp(a[i].ten , a[j].ten) > 0){
				ksv c = a[i];
				a[i] = a[j];
				a[j] = c;
			}
		}
	}
	for(int i = 0;i<n;i++){
		printf("\n%s %s\t%c\t%.1f\t%.1f\t%.1f\n", a[i].hoDem, a[i].ten, a[i].quequan, a[i].t, a[i].l, a[i].h);	
	}
}
void timque(ksv *a , int n){
	sl s[4];
	s[0].que='A';
	s[1].que='B';
	s[2].que='C';
	s[3].que='D';
	for(int i=0;i<n;i++){
		if(a[i].quequan == 'A') s[0].slsv ++;
		else if(a[i].quequan == 'B') s[1].slsv++;
		else if(a[i].quequan == 'C') s[2].slsv++;
		else if (a[i].quequan == 'D')s[3].slsv++;
	}
	for(int i=0; i<4; i++){
		printf("Que %c co so sv la: %d\n", s[i].que, s[i].slsv);
	}
	//sap xep mang tu lon den nho => s[0] max ; s[1]  max second;  1 1 1 1
	for(int i=0; i<4; i++){
		for(int j=i+1; j<4; j++){
			if(s[i].slsv < s[j].slsv) {
				sl c = s[i];
				s[i] = s[j];
				s[j] = c;
			}
		}
	}
	int ok = 0;
	// s[0] luon la phan tu max. Can in ra phan tu max thu 2. => in ra phan tu tiep theo khac max.
	//  9 5 2 1 => max thu 2 la: 5
	// 9 9 5 2 => max thu 2 la: 5
	// 9 9 9 9 = > max thu 2 la : 9
 
	printf("Que co nhieu sv thu 2 la: %c", s[1].que);
////	for(int i=1; i< 4; i++){
////		if(s[i].slsv != s[0].slsv){
////			ok = 1 , printf("\n Que co nhieu sv thu 2 la: %c", s[i].que);
////			break;	
////		}
////	}
////	if(ok == 0){
////		printf("Que co nhieu sv thu 2 la: %c", s[1].que);
////	}
 
}
 
int main(){
	FILE *fi, *fo = fopen("outsv.txt", "wt");
	ksv *sv;
	int n;
	char ten_file[30];
	printf("Nhap ten file: ");
	gets(ten_file);
	fi = fopen(ten_file, "rt");
	input(fi, &sv, &n);
	output(fo, sv, n);
 
	// b
	tong(sv, n);
 
	//c
	sx(sv, n);
 
	//d
	timque(sv, n);
 
}

