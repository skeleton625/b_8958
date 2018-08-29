#include <iostream>
using namespace std;

int t, c, m;
char i1[81];
int main() {
	cin >> t;
	while (t--) {
		cin >> i1;
		for (int i = 0; i1[i]; i++) {
			if (i1[i] == 'X') c = 0;
			else c++;
			m += c;
		}
		cout << m << endl;
		m = 0; c = 0;
	}
	return 0;
}