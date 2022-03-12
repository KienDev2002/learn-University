#include<stdio.h>
#include<math.h>
#include<string.h>
int tim (int N){
	int S=0,max=0,m;
	if (N<=1){
		return 0;
	}else{
	for (int i=1;i<N;i++){
		if (max<i){
			max=i;
			S+=i;
			if (S<N){
				m=max;
				}
			}
		}
			return m;	
	}
}
int main(){
	int N;
	printf("nhap n=N= ");
	scanf("%d",&N);
	if (tim(N)==0){
		printf("khong co gt m thoa max");
	}else{
		printf("m=%d",tim(N));
	}
}

