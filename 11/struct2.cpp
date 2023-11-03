# include <iostream>

using namespace std;

struct Carro{
	string nome;
	string cor;
	int pot;
	int velMax;
	int vel;
	
	void insere(string stnome, string stcor, int stpot, int stvelmax) {
		nome = stnome;
		cor = stcor;
		pot = stpot;
		velMax = stvelmax;
	}
	
	void mostra(){
		cout << "Nome.............: " << nome << "\n";
		cout << "Cor..............: " << cor << "\n";
		cout << "Potencia.........: " << pot << "\n";
		cout << "Velocidade actual: " << vel << "\n";
		cout << "Velocidade maxima: " << velMax << "\n";		
	}
	
	void mudaVel(int mv) {
		vel = mv;
		
		if (vel > velMax) {
			vel = velMax;
		}
		
		if (vel < 0) {
			vel = 0;
		}
	}
};

int main() {
	
	cout << "......." << " CARROS " << "......." << "\n\n";
	
	Carro car1, car2;
		
	car1.insere("Tornado", "Vermelho", 470, 370);
	car2.insere("Mercedez", "Cinzento", 280, 100);	
	
	car1.mostra();
	
	cout << "\n";
	
	car2.mostra();
	
	return 0;

}
