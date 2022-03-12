#include<stdio.h>
#include<math.h>

int main (){
	int dem =0;
	for (int i=0 ; i<=100;i++){
		for (int j=0 ; j<=200 ; j++){
			for (int k=0 ; k<=500; k++){
				if (i*1+j*2+5*k==200){
					dem++;
					printf ("%d",dem);
				}
			}
		}
	}
}
