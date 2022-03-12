#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
int main(){
	int n;
	int *a= new int [n];// cap phat n o nho cho con tro a
	FILE *p , *p1;
	p=fopen("dayso.txt","r");// mo file dayso sau do doc file do
	fscanf(p,"%d",&n);// doc file dayso.txt de gan cho n
	for (int i=1;i<=n;i++){
		fscanf(p,"%d",&a[i]);// doc file dayso.txt de gan cho a[i]
	}
	int max=a[1],tong=0;
	for (int i=1;i<=n;i++){
		tong+=a[i];
		if (a[i]>max){
			max=a[i];
		}
	}
	printf("S=%d",tong);
	printf("\nGTLN=%d",max);
	p1=fopen("output.txt","w");// mo file output va dien vao file do
	fprintf(p1,"S=%d",tong);// ghi tong vao file output
	fprintf(p1,"\nGTLN=%d",max);// ghi max vao file output
	fclose(p);
	fclose(p1);
}

