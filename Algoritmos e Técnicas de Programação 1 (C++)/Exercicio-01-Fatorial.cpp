// Faça um programa que retorne o fatorial de N.

#include <iostream>
using namespace std;
int n, i, fat;
int main() {
	
	cin >> n;
	i = 1;
	fat = 1;
	while (i <= n) {
		fat = fat * i;
		i++;
	}
	cout << fat;
}
