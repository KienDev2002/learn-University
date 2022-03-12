#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int *a = NULL, dong, cot;
    int i;
    printf("Nhap vao so dong = ");
    scanf("%d", &dong);
    printf("Nhap vao so cot = ");
    scanf("%d", &cot);
    // C?p phát
    a = (int *)malloc(dong * cot * sizeof(int));
 
    // Nh?p ma tr?n
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("a[%d][]%d = ", i, j);
            scanf("%d", (a + i*dong + j));
        }
    }
 
    // Xu?t ma tr?n
    for(int i = 0; i < dong; i++){
        for(int j = 0; j < cot; j++){
            printf("%d\t", *(a + i*dong + j));
        }
        printf("\n");
    }
 
    // gi?i phóng
    free(a);
    return 0;
}

