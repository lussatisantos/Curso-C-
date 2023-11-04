# include <iostream>

using namespace std;

int main() {
	
	int *p;
	int vetor[10];
	
	p = vetor;
	cout << p << "\n\n";
	
	*(p+=1); // incrementar o ponteio
	*p = 20;
	cout << vetor[1] << "\n\n";
	
	
	p = &vetor[2];
	cout << p << "\n\n";
	return 0;
}
