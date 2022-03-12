/*
   chuyen tu he 10 sang he 2 
   so thap phan : 1110: 1*10^3 + 1*10^2 + 1*10^1 + 1*10^0
   so nhi phan : 1110: 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0
*/

#include<stdio.h>
#include<math.h>
int chuyenheso (long long chuyen);
int main(){
    long long chuyen;
    printf("nhap so nhi phan la: ");
    scanf("%lli",&chuyen);
    printf("%d",chuyenheso(chuyen));
}
int  chuyenheso (long long chuyen){
	int p=0;
	int kq=0;
	  while (chuyen >0){
	  	kq+=(chuyen %10 )*pow (2,p);// lay so cuoi chia du cho 10
	    p++;
	    chuyen/=10;// bo so cuoi chia het cho 10
	   }
	return kq;
}



