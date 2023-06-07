#include <iostream>

int main()
{

	setlocale(LC_ALL, "Russian");
	int y;
	cout<<"Введите число"<<endl;
	cout << "проверка попадает ли y в промежуток (-5;-1)" << endl;
	cin>>y;
	if (y< -5 || y>-1)
	{
		cout << "Число подходит"<<endl;
	}
	else
	{
		cout << "Число не подходит"<< endl;
	}
}

