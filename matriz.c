#include <stdio.h>
#include <stdlib.h>

int main(){
	float mat[3][4];
	int i, j;

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite a posicao[%d][%d]: ", i+1, j+1);
			scanf("%f", &mat[i][j]);
		}
	}

	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%.0f ", mat[i][j]);
		}
        printf("\n\n");
	}

	return 0;
}
