#include<stdio.h>

void main() {
	int i = 0;
	printf("1보다 큰 수를 입력해보세요.\n");
	scanf_s("%d", &i);

	if (i % 2 == 0 && i>=0) {
		printf("짝수");
	}
	else if (i % 2 != 0 && i>=0) {
		printf("홀수");
	}
	else {
		printf("ERROR");
	}
	
	fgetc(stdin);
}