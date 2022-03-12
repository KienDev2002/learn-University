#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct SV {
	char h[12];
	char t[12];
	char q[12];
	float  T,L,H;
};
struct sl{
	char que[12];
	int slsv ;
};
struct SV *a;
struct sl *s;
void docfile (int *n , struct SV **a , FILE *p1){
	fscanf(p1,"%d\n",n);
	if ((((*a)=(SV*)malloc((*n)*sizeof(SV)))==NULL)){
		printf("chua co bo nho!");
		exit(0);
	}
	int i=0;
	for(;;){
		fscanf(p1,"%[^\n]\n %[^\n]\n %[^\n]\n %f\n %f\n %f\n",(*a)[i].h,(*a)[i].t,(*a)[i].q,&(*a)[i].T,&(*a)[i].L,&(*a)[i].H);
		i++;
		if(feof(p1))  break;
	}
}
void in (int n, struct SV *a, FILE *p2){
	for (int i=0;i<n;i++){
		fprintf(p2,"\n%10s %10s %10s %7.2f %7.2f %7.2f",a[i].h,a[i].t,a[i].q,a[i].T,a[i].L,a[i].H);
		printf("\n%10s %10s %10s %7.2f %7.2f %7.2f",a[i].h,a[i].t,a[i].q,a[i].T,a[i].L,a[i].H);
	}
}
void tongdiem(int n , struct SV *a, FILE *p2){
	float S=0;
	float max=0;
	for (int i=0;i<n;i++){
		S=a[i].T+a[i].L+a[i].H;
		printf("\nTong diem cua sinh vien %s la: %.2f",a[i].t,S);
		max = S > max ? S:max;
	}
	printf("\n SV Tong cao nhat la:");
	for (int i=0;i<n;i++){
		if (a[i].T+a[i].L+a[i].H == max){
		fprintf(p2,"\n%10s %10s %10s %7.2f %7.2f %7.2f",a[i].h,a[i].t,a[i].q,a[i].T,a[i].L,a[i].H);
		printf("\n%10s %10s %10s %7.2f %7.2f %7.2f",a[i].h,a[i].t,a[i].q,a[i].T,a[i].L,a[i].H);
		}
	}
}
void sapxep (int n , struct SV *a, FILE *p2){
	printf("\n sap xep theo ten:\n");
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (strcmpi(a[i].t,a[j].t)>0){
				SV stemp = a[i];
				a[i]=a[j];
				a[j]=stemp;
			}
		}
	}
	in(n,a,p2);
}
void dem (int n , struct sl *s, struct SV *a){
	if (((s=(sl*)malloc(4*sizeof(sl)))==NULL)){
		printf("chua co bo nho!");
		exit(0);
	}
	for(int i=0;i<4;i++){
		s[i].slsv=0;
	}
	strcpy(s[0].que,"A");
	strcpy(s[1].que,"B");
	strcpy(s[2].que,"C");
	strcpy(s[3].que,"D");
	for (int i=0;i<n;i++){
		if (strcmpi(a[i].q,"A")==0) s[0].slsv++;
		else if (strcmpi(a[i].q,"B")==0)  s[1].slsv++;
		else if (strcmpi(a[i].q,"C")==0)  s[2].slsv++;
		else if (strcmpi(a[i].q,"D")==0)  s[3].slsv++;
	}
	for (int i=0;i<4;i++){
		printf("\nTong sinh vien vung Que %s la: %d",s[i].que,s[i].slsv);
	}
	for (int i=0;i<3;i++){
		for (int j=i+1;j<4;j++){
			if (s[i].slsv<s[j].slsv){
				sl stemp = s[i];
				s[i]=s[j];
				s[j]=stemp;
			}
		}
	}
	int max = s[0].slsv, ok=0;
	for (int i=1;i<4;i++){
		if (s[i].slsv!=max){
			ok =1;
			printf("\nQue co sinh vien nhieu thu 2 la: %s",s[i].que);
			break;
		}
	}
	if (ok==0){
		printf("\nQue co sinh vien nhieu thu 2 la: %s",s[1].que);
	}
}
int main(){
	int n;
	char *c = (char*)malloc(30*sizeof(char));
	printf("Nhap ten file:");
	gets(c);
	FILE *p1 = fopen(c,"r"), *p2 = fopen("out_29_6.txt","w");
	if (p1==NULL){
		printf("\nchua co file");
		exit(0);
	}
	docfile(&n,&a,p1);
	in(n,a,p2);
	tongdiem(n,a,p2);
	sapxep(n,a,p2);
	dem(n,s,a);
	fclose(p1);
	fclose(p2);
	free(c);
	free(a);
}

