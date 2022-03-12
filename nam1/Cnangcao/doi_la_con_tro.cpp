#include<stdio.h>
#include<math.h>
#include<string.h>
int  thay (int *p){
	*p+=6;
	return *p;
}
int main(){
  int a=5;
  printf("\n gia tri truoc khi doi la: %d",a);
  printf("\n gia tri sau khi doi la: %d",thay(&a));
}

