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

	printf("num1�ɑ������l����� : ");
	scanf_s("%d", &num1);
	printf("\n");

	printf("num2�ɑ������l����� : ");
	scanf_s("%d", &num2);

	int result = Max(num1, num2);

	printf("\nnum1��num2��Max�֐����g���Ēl���傫���ق���\������ : %d\n",result);

	return 0;
}