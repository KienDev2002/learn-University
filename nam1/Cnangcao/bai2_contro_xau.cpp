#include<stdio.h>
#include<math.h>
#include<string.h>
void in (int n){
	switch (n){
		case 1: {
			printf("so %d la thu chu nhat",n);
			break;
		}
		case 2:{
			printf("so %d la thu 2",n);
			break;
		}
		case 3:{
			printf("so %d la thu 3",n);	
			break;
		}
		case 4:{
			printf("so %d la thu 4",n);	
			break;
		}
		case 5:{
			printf("so %d la thu 5",n);	
			break;
		}
		case 6:{
			printf("so %d la thu 6",n);	
			break;
		}
		case 7:{
			printf("so %d la thu 7",n);	
			break;
		}default:{
			printf("\n vui long nhap lai n!");
		}
	}
}
int main(){
	
	int n;
	do {
		printf("n: ");
		scanf("%d",&n);
	}while (n<0||n>7);
	in(n);
}

