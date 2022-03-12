#include<stdio.h>
void hoandoi (int *a , int *b){
	int stemp = *a;
	*a=*b;
	*b=stemp;
}
int main(){
	int x=10,y=20;
	printf("truoc khi goi ham la: %d va %d",x,y);
	hoandoi(&x,&y);
	printf("\nsau khi goi ham la: %d va %d",x,y);	
}
