#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 8; i++) {
		cout << i + 1 << "´ÜÀº : " << endl;
		for (int j = 0; j < 8; j++) {
			cout << i + 1 * j + 1 << " ";
		}
		cout << endl;
	}
}