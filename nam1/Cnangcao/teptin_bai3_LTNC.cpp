#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define size 100
void docfile (FILE *&p , char *s , int &m , int &n){
	p=fopen("chuoi.txt","r");
	if (p==NULL){
		printf("khong tim thay file");
		exit(0);
	}
	while (!feof(p)){
	fscanf(p,"%d%d",&m,&n);
	fgets(s,100,p);
	}
	s[strlen(s)-1]='\0';
	puts(s);
	fclose(p);
}
int ktra (FILE *&p , char *s){
	for (int i=0;i<strlen(s);i++){
		if (s[i]>='0' && s[i]<='9'){
			return 0;
		}
	}
	return 1;
}
int demsotu (char *s){
	int dem=0;
	for (int i=0;i<strlen(s);i++){
		if (s[i]==' '){
			dem++;
		}
	}
	return dem+1;
}
void laykitu (char *s , int &n){
	for (int i=strlen(s)-n;i<=strlen(s);i++){
		printf("%c",s[i]);
	}
}
void laynkitu(char *s , int&m , int &n){
	for (int i=m;i<m+n;i++){
		printf("%c",s[i]);
	}
}
void ghifile ( FILE *&p1 , char *s , FILE *&p , int &n , int &m){
	p1=fopen("outchuoi.txt","w");
	fseek(p1,0,0);
	fprintf(p1,"- Chuoi ki tu la: ",s);
	fputs(s,p1);
	if (ktra(p,s)==1){
		fprintf(p1,"\n- Chuoi nay khong la chuoi so",s);
	}else{
		fprintf(p1,"\n- Chuoi nay la chuoi so",s);
	}
	fprintf(p1,"\n- Chuoi co %d tu",demsotu(s));
	fprintf(p1,"\n- Voi m = %d , n = %d thi :",m,n);
	int i;
	fseek(p1,0,2);
	fprintf(p1,"\n + Dich sang %d ki tu tu ben phai cua chuoi la: ",n,s);
	for (int i=strlen(s)-n;i<=strlen(s);i++){
		fprintf(p1,"%c",s[i]);
	}
	fseek(p1,0,2);
	fprintf(p1,"\n + Dich sang %d ki tu tu vi tri thu %d la: ",n,m,s);
	for (int i=m;i<m+n;i++){
		fprintf(p1,"%c",s[i]);
	}
}
int main(){
	int m,n;
	FILE *p, *p1;
	char *s = (char*)malloc(size*sizeof(char));
	docfile(p,s,m,n);
	if (ktra(p,s)==1){
		printf("\- Chuoi nay khong la chuoi so");
	}else{
		printf("\- Chuoi nay la chuoi so");
	}
	printf("\n- lay %d ki tu tu ben phai sang la: ",n);
	laykitu(s,n);
	printf("\n- lay %d ki tu tu vi tri thu %d la: ",n,m);
	laynkitu(s,m,n);
	ghifile(p1,s,p,n,m);
	free(s);
}

