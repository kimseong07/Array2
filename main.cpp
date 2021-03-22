#include <iostream>
using namespace std;

int main()
{
	char str[3][10] = { " ", };

	cout << "입력하세요" << endl;
	cin >> str[0];
	cin >> str[1];
	cin >> str[2];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (str[i][9 - j] != 0)
			{
				cout << str[i][9 - j];
			}
		}
		cout << endl;
	}
	return 0;
}