#include<stdio.h>
long giaithua1(int n){
	long gt=1;
	for (int i=1;i<=n;i++){
		gt*=i;
	}
	return gt;
}
int main(){
	int n;
    long sum2=giaithua1(5);
    printf("%li",sum2);
}
