#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool isEveinNumber(int n){
	return n%2==0;
}
int main(){
	bool trueorfalse=true;
	bool even = isEveinNumber(23);
	printf ("%d",even);
	return 0;
}
