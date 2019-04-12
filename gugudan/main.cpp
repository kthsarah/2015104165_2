#include <iostream>
using namespace std;

int main() {
	
	for (int x = 2; x < 9; x++) {
		for (int y = 1; y < 10; y++) {
			cout << x * y << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}