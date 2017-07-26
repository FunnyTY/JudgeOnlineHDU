#include <iostream>
using namespace std;

int main()
{
	int sum = 0, i, n;
	while (cin >> n)
	{
		while (n)
		{
			sum += n;
			n--;
		}
		cout << sum << endl << endl;
		sum = 0;
	}
	return 0;
}