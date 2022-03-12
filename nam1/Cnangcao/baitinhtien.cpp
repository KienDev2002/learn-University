#include<stdio.h>
#include<math.h>


int main(){
	int i;
	int x,y,z;
	for (x=0;x<=200;x++){
		for (y=0;y<=100;y++){
			for (z=0;z<=40;z++){
				if (1*x+2*y+5*z==200){
					printf("%d to 1 %d to 2 %d to 3\n",x,y,z);
				}
			}
		}
	}
}
