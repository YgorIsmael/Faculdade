#include <iostream>
using namespace std;
int main(){
	int i, val, n2;
	float n1, n3;
	i = 1;
	n1 = 0.5;
	n2 = 2;
	while (i <= 10) {
		if (n2 % 2 == 0){
			n3 = (n2 /(2 * n1));
			n1 = 2 * n1;
			cout << n3 << "\n";
	}
		else {
			n3 = (n2 /(2 * n1)) * -1;
			n1 = 2 * n1;
			cout << n3 << "\n";
	}	
		n2++;
		i++;
	}
}
