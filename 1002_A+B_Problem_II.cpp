#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int T, count = 1;
	cin >> T;
	while (T)
	{
		char a[1000], b[1000];
		memset(a, 0, 1000);
		memset(b, 0, 1000);
		cin >> a >> b;
		int i = 0;
		int m[1001], n[1001];
		memset(m, 0, 1001 * sizeof(int));
		memset(n, 0, 1001 * sizeof(int));
		int lena, lenb;
		lena = strlen(a);
		lenb = strlen(b);
		for (i = lena - 1; i >= 0; i--)
			m[lena - i - 1] = a[i] - '0';
		for (i = lenb - 1; i >= 0; i--)
			n[lenb - i - 1] = b[i] - '0';
		i = 0;
		int len = lena > lenb ? lena : lenb;
		while (i < len)
		{
			m[i] += n[i];
			if (m[i] >= 10)
			{
				m[i + 1] += 1;
				m[i] -= 10;
			}
			i++;
		}
		cout << "Case " << count++ << ":" << endl;
		cout << a << " + " << b << " = ";
		if (m[len])
			cout << m[len];
		i = len - 1;
		while (i >= 0)
			cout << m[i--];
		cout << endl;
		T--;
		if (T != 0)
			cout << endl;
	}
	return 0;
}