# include <iostream>
# include <list>

using namespace std;

int main() {
	
	list <int> aula, teste;
	int tam;
	list <int>::iterator it;
	
	for (int i=0; i<4; i++) {
		teste.push_front(i);
}
	tam = 10;
	for (int i=0; i<tam; i++) {
		aula.push_front(i);
	}

	it =  aula.begin();
	advance(it, 3);
	aula.insert(it, 0);
	
	aula.erase(--it);
	
	// aula.clear();
	aula.merge(teste);
	
	cout << "Tamanho da lista: " << aula.size() << "\n\n";
	
	
	tam = aula.size();
	for (int i=0; i<tam; i++) {
		cout << aula.front() << "\n";
		aula.pop_front();
	}
	
	cout << "\nTamanho da lista: " << aula.size() << "\n";
	
	return 0;
}
