#include <iostream>
using namespace std;

int main() {
	int n, i, fat;
	cin >> n;
	i = 1;
	fat = 1;
	while (i <= n) {
		fat = fat * i;
		i++;
	}
	cout << fat;
}
