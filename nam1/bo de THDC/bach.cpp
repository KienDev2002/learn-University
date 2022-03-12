#include <stdio.h>
#include <math.h>
void nhap(int n,int *a){
    int i;
    for(i=1;i<=n;i++){
        printf("a[%d]= ",i); scanf("%d",&a[i]);
    }
}
void xuat(int n,int *a){
    int i;
    for(i=1;i<=n;i++){
        printf("%d\t",a[i]);
    }
}
float tinhS(int n,int *a,float x){
    int i;
    float s=sin(x);
    for(i=1;i<=n;i++){
        s=s+(float)(a[i]*a[i])/(float)(x+i-1);
    }
    printf("S= %f\n",sqrt(s));
}
void ycuoi(int n,int *a){
    int i,dem=0,max;
    for(i=1;i<=n;i++){
        if(a[i]%3==2){
            max=a[i];
            dem++;
            break;
        }
    }
    for(i=1;i<=n;i++){
        if(a[i]%3==2&&a[i]>max){
            max=a[i];
        }
    }
    if(dem==0){
        printf("\nKhong co gia tri thoa man\n");
    }
    else{
        printf("\ngia tri max cua nhung so chia cho 3 du 2 la: %d\n",max);
    }
}
int main()
{
    int n;
    printf("nhap n= "); scanf("%d",&n);
    int a[n];
    printf("\n\t\t1.1\n");
    nhap(n,a);
    printf("\nday so vua nhap la: \n");
    xuat(n,a);
    printf("\n\n\t\t1.2\n");
    float x;
    printf("nhap x= "); scanf("%f",&x);
    tinhS(n,a,x);
    printf("\n\t\t1.3");
    ycuoi(n,a);
    return 0;
}
