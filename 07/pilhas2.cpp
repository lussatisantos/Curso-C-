# include <iostream>
# include <stack>

using namespace std;

int main() {
	
	stack <string> cartas;
	
	if (cartas.empty()) {
		cout << "Pilha fazia\n\n";
	} else {
		cout << "Pilha com cartas\n\n";
	}
	

	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouro");
	cartas.push("Rei de Paus");
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Carta do top: " << cartas.top() << "\n";
	
	cartas.pop();
	
	cout << "Tamanho da pilha: " << cartas.size() << "\n";
	
	cout << "Nova carta do top: " << cartas.top() << "\n\n";
	
	while(!cartas.empty()) {
		cartas.pop();
	}
	
	if (cartas.size() == 0) {
		cout << "Pilhas vazia\n\n";
	} else {
		cout << "Pilhas com cartas\n\n";
	}
	
	return 0;
}
