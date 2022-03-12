
/*

    Dau vao:

        + con tro quan ly so nguyen n la so phan tu cua day so    (chua co gia tri)

        + con tro quan ly *a voi *a la con tro dai dien cho mang mot chieu (chua co gia tri)

    Thuc hien:

        + nhap n

        + cap phat cho a gom n+5 phan tu

        + tien hanh nhap cac phan tu cua mang a tu [1;n]

    Dau ra:

        + so nguyen n sau khi nhap => thay doi n

        + thu duoc cac phan tu cua mang a tu [1;n]    => thay doi con tro a dai dien cho mang mot chieu     *n la con tro quan ly bien int n

    **a la con tro quan ly bien int *a ( voi *a la con tro dai dien cho mang mot chieu)

*/

void nhapDaySo(int *n, int **a){ //*a la con tro dai dien cho mang mot chieu <=> int a[]

    printf("Nhap so phan tu: ");

    scanf("%d",&(*n));

    //Cap phat *a tro thanh mang mot chieu: a[0],a[1]..a[n+5-1]

    (*a) = (int*)calloc( (*n)+5, sizeof(int*));

    //Nhap cac phan tu cua mang a : [1;n]

    for(int i=1; i<=(*n); i++){

        printf("Nhap a[%d]: ",i);

        scanf("%d", &(*a)[i]);

    }
}
/*

    Dau vao:    so nguyen n, con tro mang mot chieu *a

    Thuc hien:

        + In cac phan tu [1;n] cua mang mot chieu a

    Dau ra:

        + Khong co

*/ void xuatDaySo(int n, int *a){

    printf("\nDay so la: ");

    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
}

int main(){

    int n;        //So phan tu

    int *a;        //Con tro dai dien mang mot chieu a[] <=> *a

    nhapDaySo(&n,&a);

    xuatDaySo(n,a);
}



