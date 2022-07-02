#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");

	cout << " начало цикла " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << " переменная i = " << i << endl;

		if (i == 5)
		{
			break; // прерывание цикла и выход из него
		}
	}

	cout << " конец цикла " << endl;

}
