#include<stdio.h>

void main() {
	int i = 0;
	printf("1���� ū ���� �Է��غ�����.\n");
	scanf_s("%d", &i);

	if (i % 2 == 0 && i>=0) {
		printf("¦��");
	}
	else if (i % 2 != 0 && i>=0) {
		printf("Ȧ��");
	}
	else {
		printf("ERROR");
	}
	
	fgetc(stdin);
}