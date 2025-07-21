#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
	for(int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);  // %d\n 을 쓰면 테스트 창이 1줄로 숫자가 홀수가 끝나고 짝수가 나온다. 그러니 \n을 제거
		}
	}
	printf("\n");
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);  // %d\n 을 쓰면 테스트 창이 1줄로 숫자가 홀수가 끝나고 짝수가 나온다. 그러니 \n을 제거
		}
	}
	printf("\n");
	return 0;
}
