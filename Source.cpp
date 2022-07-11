#include <iostream>
#include <climits>
using namespace std;

int main()
{
	int a[5];
	for (int i = 0; i <= 4; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= 4; i++) {
		cout << " |" << a[i] << "| ";
	}
	cout << endl;
	int Start = 0;
	int End = 4;
	while (Start <= End) {
		int t = a[Start];
		 a[Start] = a[End];
		 a[End] = t;
		 Start++;
		 End--;

	}
	for (int i = 0; i <= 4; i++) {
		cout << " |" << a[i] << "| ";
	}
	return 0;
}