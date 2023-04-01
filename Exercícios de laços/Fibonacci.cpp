#include <iostream>
using namespace std;
int main() {
	int i, val, fib1, fib2, fib3;
	cin >> val;
	fib1 = 1;
	fib2 = 1;
	i = 1;
	cout << "0 \n1 \n";
	
	while (i <= val){
	fib3 = fib1 + fib2;
	cout << fib3;
	fib2 = fib1;
	fib1 = fib3;
	cout << "\n";
	i++;
	}
}
