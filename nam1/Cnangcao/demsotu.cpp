#include<stdio.h>
#include<string.h>


int main(){
	char name[50];
	printf("\n nhap ten cua ban: ");
	gets(name);
	int i,dem=0;
	for (i=0;i<strlen(name);i++){// str - string , len - length
	// co the thay the ten khac bang strlen . vi strlen dem lai them lan nua se bi thua
		// VD: int len=strlen(name)
		// thay i<strlen(name) = len. vong lap van chay binh thuong
		 if (name[i]==' '){
		 // chuoi trong mang co dau cach thi tang dem
		 	dem++;
		 }
	}
	printf("co %d tu",dem+1);//cu co 1 dau cach la co 2 tu. vay n dau cach la co n+1 tu
}
// note: 
// de bieu dien ki tu ta dung nhay don
// de bieu dien chuoi ta dung nhay kep
