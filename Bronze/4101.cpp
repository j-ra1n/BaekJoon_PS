// 4101.cpp 크냐?

#include <iostream>
using namespace std;

int main()
{
	int x, y;

	while (1) {
		cin >> x >> y;

		if (x == 0 && y == 0) {
			break;
		}

		if (x > y) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}
	}

	return 0;
}