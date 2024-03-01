#include<stdio.h>
#include<math.h>

int main(){
	int x, z;
	printf("x= ");
	scanf("%d", &x);
	printf("\nz= ");
	scanf("%d", &z);
	int a[x][z];
	printf("\nnhap gia tri cac phan tu cua mang: ");
	for(int i=0;i<x;i++){
		for(int j=0;j<z;j++){
			printf("\na[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
		printf("\nhien thi cac phan tu cua mang:\n");
		for(int i=0;i<x;i++){
		for(int j=0;j<z;j++){
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}	
}
