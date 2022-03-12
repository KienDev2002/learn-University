#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct TD {
	float x;
	float y;
};
struct TD *a;
void docfile(int *n , struct TD **a  , FILE *p1){
	fscanf(p1,"%d\n",n);
	*a = (TD*)malloc((*n)*sizeof(TD));
	int i=0;
	for (;;){
		fscanf(p1,"%f %f\n",&(*a)[i].x,&(*a)[i].y);
		i++;
		if (feof(p1)) break;
	}
}
void in (int n , struct TD *a , FILE *p2){
	for (int i=0;i<n;i++){
		printf("( %.2f ; %.2f )\n",a[i].x,a[i].y);
		fprintf(p2,"( %.2f ; %.2f )\n",a[i].x,a[i].y);
	}
}
void tinh (int n , struct TD *a){
	float S=0;
	for (int i=0;i<n;i++){
		S=S+fabs(a[i].y);
	}
	printf("\nTong cac diem den TH: %.2f",S);
}
void timdodai (int n , struct TD *a , FILE *p2, float *b){
	b = (float*)malloc(n*sizeof(float));
	printf("\n Do dai lon nhat la: ");
	fprintf(p2,"\n Do dai lon nhat la: ");
	int dem=0;
	b[dem] =(sqrt (pow (a[n-1].x-a[0].x,2)+pow (a[n-1].y-a[0].y,2)));
	for (int i=1 ; i<n ; i++){
		dem++;
		b[dem]=(sqrt (pow (a[i].x-a[i-1].x,2)+pow (a[i].y-a[i-1].y,2)));
	}
	float max = b[0];
	for (int i=1;i<=dem;i++){
		if (max<b[i]){
			max=b[i];
		}
	}
	for (int i=0; i<=dem; i++){
		if (max==b[i]){
		printf("%.2f",b[i]);	
		fprintf(p2,"%.2f",b[i]);
		}
	}
}
//void DT_Max(diem *a, int n){
//	double max = -1;
//	diem pos1, pos2;
//	for(int i = 0; i < n; i++){
//		for(int j = i + 1; j < n; j++){
//			double x = Kc(a[i], a[j]);
//			if(x > max){
//				max = x;
//				pos1 = a[i];
//				pos2 = a[j]; 
//			}
//		}
//	}
//	printf("Do dai cua doan thang dai nhat la: %0.2lf\n", max);
//	printf("Toa do 2 dau mut cua doan thang la: (%0.2lf, %0.2lf), (%0.2lf, %0.2lf)", pos1.x, pos1.y, pos2.x, pos2.y);
//}
int main(){
 	int n;
 	float *b;
 	FILE *p1 = fopen("toado.txt","r"), *p2=fopen("out.txt","w");
	if (p1==NULL){
	printf("chua co file");
	}
	docfile(&n,&a,p1);
	in(n,a,p2);
	tinh(n,a);
	timdodai(n,a,p2,b);
}

