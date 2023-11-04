# include <iostream>

using namespace std;

int main() {
	
	string veiculo="Carro";
	string *pv;
	
	pv = &veiculo; //Ponteiro PV recebe o endereco da variavel veiculo
	
	cout << pv << "\n\n";
	cout << &veiculo << "\n\n";
	cout << *pv << "\n\n";
	
	*pv = "Moto"; // No endereco apontado por *pv adicione o valor "Moto"
	
	cout << veiculo << "\n" << *pv ;
	
	return 0;
}
