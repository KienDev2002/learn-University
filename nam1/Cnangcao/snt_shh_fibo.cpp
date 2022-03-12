#include<stdio.h>
#include<math.h>
int snt(int a){
    if(a<2) return 0;
    else for(int i=2; i<=sqrt(a); i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int shh(int a){
    int s=0;
    if(a<2) return 0;
    else for(int i=1; i<a; i++){
        if(a%i==0) s+=i;
    }
    if(s==a) return 1;
    else return 0;
}
int fibo (int n){
	int i,n2=1,n1=1,n3;
		while(i<n){
		/* hoac la dong vong lap for 
			for (i=1;i<n;i++){
				if (i<=1){
					n3=i;
				}else{
					n3=n1+n2;
					n1=n2;
					n2=n3;
				}
				printf("%d",n3);
			}
		*/
		n3=n1+n2;
		n1=n2;
		n2=n3;
		i++;
	}
	return n3;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("a[%d]: ",i); scanf("%d",&a[i]);
    }
    printf("Cac so nguyen to la: ");
    for(int i=0; i<n; i++){
        if(snt(a[i])) printf("%d ",a[i]);
    }
    printf("\nCac so hoan hao la:");
    for(int i=0; i<n; i++){
        if(shh(a[i])) printf("%d ",a[i]);
    }
    printf("\n so fibo la: %d",fibo(n));
    return 0;
}

