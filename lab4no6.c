#include <stdio.h>

int main(void) {
	
	int num, time, i, j;
	
	scanf("%d %d",&num,&time);
	
	for(i = 0; i < time; i++){
		for(j = 0; j < time; j++){
			printf("%d", num);
		}
		printf("\n");
	}
}
