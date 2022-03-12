#include<stdio.h>
#include<string.h>
#include<conio.h>
int main() 
{
  char s[50];
  int i;
  printf("nhap: ");
  gets(s);
  if (s[0]==' '){
  	strcpy(&s[0],&s[1]);
  }
  if (s[strlen(s)-1]==' '){
  	s[strlen(s)-1]='\0';
  }
  for (i=0;i<strlen(s);i++){
  	if (s[i]==' ' && s[i+1]==' '){
  		 strcpy(&s[i],&s[i+1]);
  		 i--;
	  }
  }
  puts(s);
  getch();
  return 0;
}

