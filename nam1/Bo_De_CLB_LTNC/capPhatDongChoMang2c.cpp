#include<stdio.h>
#include<stdlib.h>

void capPhat(int ***a, int *dong, int *cot){
	(*a) = (int **) malloc ((*dong) * sizeof(int *));
	for(int i=0; i<*dong; i++){
		(*a)[i] = (int *) malloc (*cot * sizeof(int));
	}
}
void nhap(int ***a, int *dong, int *cot){
	for(int i=0; i<*dong; i++){
		for(int j=0; j<*cot; j++){
			scanf("%d", &(*a)[i][j]);
		}
	}
}
void xuat(int **a, int dong, int cot){
	for(int i=0; i<dong; i++){
		for(int j=0; j<cot; j++){
			printf("%-5d", a[i][j]);
		}
		printf("\n");
	}
}
void giaiPhong(int ***a, int dong){
	for(int i =0; i<dong; i++){
		free((*a)[i]);
	}
	free((*a));
}
int main(){
	int **a, dong, cot;
	scanf("%d%d", &dong, &cot);
	capPhat(&a, &dong, &cot);
	nhap(&a, &dong, &cot);
	xuat(a, dong, cot);
	giaiPhong(&a, dong);
	return 0;
}

