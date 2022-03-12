#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
int main()
{
	char s[]="Hiep trau, Kien trau, Dung nghe";
	while(true){
		int i=0;
		while(i<80){
			for(int d=0;d<10;d++)
			printf("\n");
			int j=0;
			while(j<89-i){
				printf(" ");
				j++;
			}
			for(int j=i;j<strlen(s)+i && j<80;j++){
				printf("%c",s[j-i]);
				Sleep(100);
			}
			system("cls");	
			i+=5;
		}
	}
}

