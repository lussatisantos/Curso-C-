# include <iostream>
using namespace std;

int main() {
	int num1, num2, oper;
	
	// TIPOS DE VARIAVEIS SEMELHANTES A LINGUAGEM C
	
	cout << "Digite um numero: ";
	cin >> num1;
	
	cout << "Digite outro numero: ";
	cin >> num2;
	
	cout << "A soma desses numeros: ";
	oper = num1 + num2;
	cout << oper;
	
	cout << "A subtracao desses numeros: ";
	oper = num1 - num2;
	cout << oper;
	
	cout << "A multiplicacao desses numeros: ";
	oper = num1 * num2;
	cout << oper;
	
	cout << "A divisao desses numeros: ";
	oper = num1 / num2;
	cout << oper;
	
	return 0;
}
