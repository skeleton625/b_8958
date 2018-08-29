#include <cstdio>

int t, c, m;
char i1[81];
int main() {
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%s", i1, 81);
		for (int i = 0; i1[i]; i++) {
			if (i1[i] == 'X') c = 0;
			else c++;
			m += c;
		}
		printf("%d\n",m);
		m = 0; c = 0;
	}
	return 0;
}