#include <stdio.h>
 
int main() 
{
	char my_name[]="what your name";
    char *name= my_name;
    name[1]='E';
    printf("%s", my_name);
}

