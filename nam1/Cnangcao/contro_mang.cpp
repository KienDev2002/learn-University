#include<stdio.h>

int main(){
	int *p;// khai bao chi con tro
	int i;
	int b[5];
	int a[5]={6,5,4,3,2};
	p=a;
	printf("%d\n",*(p+1));// gia tri ma phan tu ma con tro tro toi
	printf("%d",&a);
	printf("\n%d",&a[0]);
	printf("\n%d",a);// dia chi mang
	printf("\n%d",&a[1]);// dia chi cua mang dau tien
	printf("\n%d",&a[2]);
	printf("\n%d",*(p+1));// gia tri dia chi thu hai ma con tro p tro toi
	printf("\n%d",p+2);// dia chi thu 3 ma con tro p reo toi
	printf("\n%d\n",p+3);
	printf("%d",&a);
    for (p=a;p<=a+4;p++){//con tro = ten mang = dia chi cua mang thu 0
    	printf("%d\t",*p);// gia tri dia chi ma con tro p tro toi 
	}
	printf("\n");
	for (p=&a[0];p<=&a[4];p++){//con tro = ten mang = dia chi cua mang thu 0
    	printf("%d\t",p);// dia chi com tro p tro toi tung thu tu 
	}
	printf("\n");
	for (int i=0;i<5;i++){// chay tu ptu thu 0 den ptu thu 4
    	printf("%d\t",*(a+i));// a la ten mang = con tro , gia tri con tro tro toi tung phan tu 
	}
		printf("\n");
	for (int i=0;i<5;i++){
    	printf("%d\t",a+i);// dia chi cua tung ptu khi con tro tro toi 
	}
		printf("\n");
	for (int i=0;i<5;i++){
    	printf("%d\t\n",a+i);// dia chi cua tung ptu khi con tro tro toi 
	}
	int *p_a=a;// dia chi con tro a
	int *p_b=b;// dia chi con tro b
	for (i=0;i<5;i++){
		*(p_b+i)=*(p_a+i);// cho gia tri dia chi cua con tro p tro toi b = gia tri dia chi ma con tro p tro toi a
	}
	for (i=0;i<5;i++){
	printf("%d\t",*(p_b+i));// in ra gia tri dia chi con tro p tro toi p
	}
}
