#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int one = rand(), num = 0;
	int* a = &one;

	printf("%d\n", *a);
	printf("���� �� ���ڸ� �ٲٰ� ������ 1�� �Է��ϼ���. ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		printf("���ο� ������ �Է��Ͻÿ�. : ");
		scanf_s("%d", &one);
		printf("����� ���Ӱ� �Է��� ������ %d�Դϴ�.\n", *a);
	}
	else
	{
		printf("���ڸ� �״�� �����߽��ϴ�.\n");
	}
	
	return 0;
}