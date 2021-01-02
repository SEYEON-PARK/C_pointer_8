#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	int one = rand(), num = 0;
	int* a = &one;

	printf("%d\n", *a);
	printf("만약 이 숫자를 바꾸고 싶으면 1을 입력하세요. ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		printf("새로운 정수를 입력하시오. : ");
		scanf_s("%d", &one);
		printf("당신이 새롭게 입력한 정수는 %d입니다.\n", *a);
	}
	else
	{
		printf("숫자를 그대로 유지했습니다.\n");
	}
	
	return 0;
}