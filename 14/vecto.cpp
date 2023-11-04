# include <iostream>
# include <vector>

using namespace std;

int main() {
	
	vector<int> num;
	int tam, i;
	
	num.push_back(10);
	num.push_back(20);
	num.push_back(30);
	num.push_back(40);
	
	tam=num.size();
	
	cout << "Tamanho do vecto: " << tam << endl;
	
	for (i=0; i<tam; i++) {
		cout << num[i] << "\n";
	}
	
	return 0;
}
