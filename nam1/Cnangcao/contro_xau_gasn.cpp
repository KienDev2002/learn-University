#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
//  	char *my_name=" ngo trung kien";// tro truc tiep den chuoi ki tu
//  	my_name[3]='G';// vi chuoi ki tu no la vung nho hang khong the thay doi, nen ko the tro den thay doi dc 
//  	printf("%s",my_name);
  	/*
  	   
  	*/
//  	
//  	for (int i = 0; i < strlen("Ngo Trung Kien"); i++){
//	  printf("%s","Ngo trung Kien"[i]);
//	}
//	"Ngo trung Kien"[1]='G';// ;loi la do moi hang ki tu co mot dia chi khac nhau
	
	/*
	   		in toan bo mang ki tu
	*/
	char his_name[]="Ngo Trung Kien";
	printf("\n%s",his_name);
	
	
	/*
				dia chi cua mang == con tro == ten mang
	
	*/
	char s[]="hello wold";
	char *p=s;
	printf("\n%d",&s);
	printf("\n%d",p);
	printf("\n%d",s);
	p[1]='E';// tro den ki tu thu 2
	printf("\n%s",p);// in ra hEllo
	
	
	/*
	 in dia chi cua 1 ki tu
	*/
	  char ch='A';
	  printf("\n%d",&ch);
}

