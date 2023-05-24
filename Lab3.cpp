#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	int y;
	printf("Введите число");
	scanf_s("%d", &y);
	if (y< -5 || y>-1)
	{
		printf("Число подходит");
	}
	else
	{
		printf("Число не подходит");
	}
}

