#include<stdio.h>
#include<math.h>
#include<string.h>
int cong (int n){
	if (n<1)	return 0;
		return n+cong(n-1);
}
int binhphuong (int n){
	if (n==1)return 1;
		return pow(n,2)+binhphuong(n-1);
}
float baybahai (int n){
	if (n==1)return 1;
	return 1.0/n + baybahai(n-1);
}
float baybaba (int n){
	if(n==1) return 0.5;
	return 1.0/(2*n) + baybaba(n-1);
}
float baybatu (int n){
	if (n==0)return 1;
	return 1.0/(2*n+1) + baybatu(n-1);
}
float baybanam (int n){
	if (n==1)return 0.5;
	return 1.0/(n*(n+1)) + baybanam(n-1);
}
float baybasau (int n){
	if (n==1)	return 0.5;
	return (float) n/(n+1)+baybasau(n-1);
}
float baybabay (int n){
	if (n==0)	return 0.5;
	return (float) (2*n+1)/(2*n+2)+baybabay(n-1);
}
float baybatam (int n){
	if (n==1)	return 1;
	return n*baybatam(n-1);
}
float baybachin (int n , int x){
	if (n==0)	return 1;
	if (n<0){
		return (1.0/x) * baybachin(n+1,x);
	}else
			return x*baybachin(n-1,x);
}
float baybonmuoi (int n){
	float tinh=1;;
	if (n==1)return 1;	
	for (int i=1;i<=n;i++)
	tinh*=i;
	return tinh + baybonmuoi(n-1);	
}
float baybonmot (int n , int x){
	if (n==1)	return x;
	return pow(x,n)+baybonmot(n-1,x);
}
float baybonhai (int n , int x){
	if (n==1)	return x*x;
	return pow(x,2*n) + baybonhai(n-1,x);
}
float baybonba (int n , int x){
	if (n==0)	return x;
	return pow(x,2*n+1) + baybonba(n-1,x);
}
float baybonbon (int n){
	float tinh=0;
	if (n==1)return 1;	
	for (int i=1;i<=n;i++)
	tinh+=i;
	return (1/tinh) + baybonbon(n-1);	
}
float baybonnam (int n,int x){
	float tinh=1;
	if (n==1)return x;	
	for (int i=1;i<=n;i++)
	tinh*=i;
	return (pow(x,n)/tinh)+ baybonnam(n-1,x);	
}
float baybonsau (int n,int x){
	float tinh=1;
	if (n==0)return 1;	
	for (int i=1;i<=2*n;i++)
	tinh*=i;
	return (pow(x,2*n)/tinh) + baybonsau(n-1,x);	
}
float uocsolemax (int n){
	if (n%2!=0) return n;
	return uocsolemax(n/2);
}
float baybontam (int n){
	if (n==1) return sqrt(2);
	return  sqrt (2+baybontam(n-1));
}
float baybonchin(int n){
	if(n==1)	return 1;
	int i=n+1;
	return sqrt(i-1+baybonchin(n-1));
}
/*
	750 can hoi thuan toan
*/
float baynammuoi (int n){
	if (n==1) return sqrt(n);
	int i=-1-n;
	return  sqrt (-i-n+baynammuoi(n-1));
}
float baynammot (int n){
	if (n==1) return 0.5;
	return  1.0/(1+baynammot(n-1));
}
int demso (int n){
	if (n!=0){
		n%10;
	return (float)	demso(n/10)+1;
	}
}
float tongso (int n){
	if (n==0) return 0;
	return n%10 + tongso(n/10);
}
float tichso (int n){
	if (n==0) return 1;
	return n%10 * tichso(n/10);
}
int demsole (int n){
	if (n!=0){
		if ((n%10)%2!=0){
			return demsole(n/10) +1;
		}else{
			return demsole(n/10);
		}
	}
}
int tichsole (int n){
	if (n==0) return 1;
	if ((n%10)%2!=0) return (n%10)*(tichsole(n/10));
	return tichsole(n/10);
}
void sodaonguoc (int n){
	if(n!=0){
		printf("%d",n%10);
		sodaonguoc(n/10);
	}
}
int solonnhat (int n){
	if (n<10) return n;
	if ((n%10)>solonnhat(n/10)) return n%10;
	return solonnhat(n/10);
}
int sonhonhat (int n){
	if (n<10) return n;
	if (n%10<sonhonhat(n/10)) return n%10;
	return sonhonhat(n/10);
}
int ktrale (int n){
	if (n==0) return 1;
	if ((n%10)%2==0) return 0;
	ktrale(n/10);
}
int main(){
	int n,x;
	printf("n: ");
	scanf("%d",&n);
	printf("nhap x: ");
	scanf("%d",&x);
	printf(" tong = %d",cong(n));
	printf("\n binhphuong = %d",binhphuong(n));
	printf("\n bay ba hai = %0.2f",baybahai(n));
	printf("\n bay ba ba = %0.2f",baybaba(n));
	printf("\n bay ba tu = %0.2f",baybatu(n));
	printf("\n bay ba nam = %0.2f",baybanam(n));
	printf("\n bay ba sau = %0.2f",baybasau(n));
	printf("\n bay ba bay = %0.2f",baybabay(n));
	printf("\n bay ba tam = %0.2f",(float)baybatam(n));
	printf("\n bay ba chin = %0.2f",(float)baybachin(n,x));
	printf("\n bay bon muoi = %0.2f",baybonmuoi(n));
	printf("\n bay bon mot = %0.2f",baybonmot(n,x));
	printf("\n bay bon hai = %0.2f",baybonhai(n,x));
	printf("\n bay bon ba = %0.2f",baybonba(n,x));
	printf("\n bay bon bon = %0.2f",baybonbon(n));
	printf("\n bay bon nam = %0.2f",baybonnam(n,x));
	printf("\n bay bon sau = %0.2f",baybonsau(n,x));
	printf("\n uoc so le lon nha la = %0.2f",uocsolemax(n));
	printf("\n can la = %0.2f",baybontam(n));
	printf("\n can la = %0.2f",baybonchin(n));
	printf("\n can la = %0.2f",baynammuoi(n));
	printf("\n phan so la = %0.2f",baynammot(n));
	printf("\n co %d chu so",demso(n));
	printf("\n tong cac so la: %0.2f",tongso(n));
	printf("\n tich cac so la: %0.2f",tichso(n));
	printf("\n co %d so le",demsole(n));
	printf("\n tich cac so le la: %d",tichsole(n));
	printf("\n so dao nguoc la: ");
	sodaonguoc(n);
	printf("\n so lon nhat %d",solonnhat(n));
	printf("\n so nho nhat %d",sonhonhat(n));
	if (ktrale(n)==1){
		printf("\n n toan so le");
	}else {
		printf("\n n ko toan so le");
	}
}

