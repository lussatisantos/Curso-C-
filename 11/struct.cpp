# include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;
};

int main() {
	
	cout << "......." << " CARROS " << "......." << "\n\n";
	
	Carro car1;
	car1.nome = "Tornado";
	car1.cor = "Vermelho";
	car1.pot = 470;
	car1.velMax = 370;
	
	cout << "Nome.............: " << car1.nome << "\n";
	cout << "Cor..............: " << car1.cor << "\n";
	cout << "Potencia.........: " << car1.pot << "\n";
	cout << "Velocidade maxima: " << car1.velMax << "\n";
	
	cout << "\n";
	
	Carro car2;
	car2.nome = "Rolls Royce";
	car2.cor = "Cinzento";
	car2.pot = 280;
	car2.velMax = 100;
	
	cout << "Nome.............: " << car2.nome << "\n";
	cout << "Cor..............: " << car2.cor << "\n";
	cout << "Potencia.........: " << car2.pot << "\n";
	cout << "Velocidade maxima: " << car2.velMax << "\n";
	
	return 0;

}
