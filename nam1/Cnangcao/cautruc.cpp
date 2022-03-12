#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

struct person {
	char *T;
	char *H;
	int age;
};
int main(){
	int n;
	scanf("%d",&n);
	struct person *a , b ;
	a=(person*)calloc(n,sizeof(person));
	for (int i=1;i<=n;i++){
		printf("nhap ten cua %d la: ",i);
		fflush(stdin);
		gets(a[i].T);
		printf("nhap ho cua %d la: ",i);
		fflush(stdin);
		gets(a[i].H);
		printf("nhap tuoi cua %d la: ",i);
		fflush(stdin);
		scanf("%d",&a[i].age);
	}
	printf("%-20s %-10s %-5s\n", "Ten", "Ho", "Tuoi");
	for(int i=1; i<=n; i++){
		printf("%-20s %-10s %-5d\n", a[i].T, a[i].H, a[i].age);
	}
}

