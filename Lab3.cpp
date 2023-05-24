#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	int x;
	printf("Введите число");
	scanf_s("%d", &x);
	if (x< -5 || x>-1)
	{
		printf("Число подходит");
	}
	else
	{
		printf("Число не подходит");
	}
}

