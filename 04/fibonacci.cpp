# include <iostream>

using namespace std;

int factorial(int n);
int fibonacci(int n);

int main() {
	
	int val, res;
	
	val = 8;
	res = factorial(val);
	cout << "Factorial de " << val << ": " << res;
	
	cout << "\n\nFibonacci com " << val << "valores: ";
	for (int i=0; i<val; i++) {
		cout << fibonacci(i+1) << " ";
	}
	
	cout << "\n\n";
	
	return 0;
	
}

// FACTORIAL
int factorial(int n) {
	if (n==0) {
		return 1;
	}
	return n*factorial(n-1);
}

//FIBONACCI
int fibonacci(int n) {
	if (n==1 || n==2) {
		return 1;
	} else {
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
