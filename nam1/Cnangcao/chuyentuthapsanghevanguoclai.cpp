/*
   chuyen tu nhi phan sang thap phan
   so thap phan : 1110: 1*10^3 + 1*10^2 + 1*10^1 + 1*10^0
   so nhi phan : 1110: 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0
*/
   /*
     cach chuyen tu thap phan sang nhi phan
     n=8
     0,4 => 8%2*10^0
     0,2 => 4%2*10^1
     0,1 => 2%2*10^2
     1,0 => 1%2*10^3
     int kq =1000
   */

#include<stdio.h>
#include<math.h>
//int chuyenheso (long long chuyen);
long long chuyensangnhiphan (long long chuyennhi);
int main(){
//    long long chuyen;
//    printf("nhap so nhi phan la: ");
//    scanf("%lli",&chuyen);
//    printf("%d",chuyenheso(chuyen));
      long long chuyennhi;
    printf("nhap so thap phan la: ");
    scanf("%lli",&chuyennhi);
    printf("%lli",chuyensangnhiphan(chuyennhi));
}
// chuyen sang thap phan
//int  chuyenheso (long long chuyen){
//	int p=0;
//	int kq=0;
//	  while (chuyen >0){
//	  	kq+=(chuyen %10 )*pow (2,p);// lay so cuoi chia du cho 10
//	    p++;
//	    chuyen/=10;// bo so cuoi chia het cho 10
//	   }
//	return kq;
//}
long long chuyensangnhiphan (long long chuyennhi){
	int p=0;
	long long kq=0;
	while (chuyennhi > 0){
		kq+= (chuyennhi%2)*pow (10,p);
		p++;
		chuyennhi/=2;
	}
	return kq;
}



