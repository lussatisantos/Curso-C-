# include <iostream>
# include <stack>

using namespace std;

int main() {
	
	stack <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouro");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Carta do top: " << cartas.top() << "\n";
	
	cartas.pop();
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Nova carta do top: " << cartas.top() << "\n";
	
	return 0;
}
