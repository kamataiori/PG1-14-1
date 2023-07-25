#include <stdio.h>

int Max(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}

int main() {

	int num1{};
	int num2;

	printf("num1に代入する値を入力 : ");
	scanf_s("%d", &num1);
	printf("\n");

	printf("num2に代入する値を入力 : ");
	scanf_s("%d", &num2);

	int result = Max(num1, num2);

	printf("\nnum1とnum2をMax関数を使って値が大きいほうを表示する : %d\n",result);

	return 0;
}