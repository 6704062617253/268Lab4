#include <stdio.h>

int main(void) {
	
	int col, row, i, j;
	char ch;
	
	scanf("%c %d %d",&ch,&col,&row);
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf("%c", ch);
		}
		printf("\n");
	}
}
