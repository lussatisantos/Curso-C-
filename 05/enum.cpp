# include <iostream> 

using namespace std;

int main() {
	
	enum armas(fuzil, revolver, rifle, escopeta);
	armas armaSel;
	
	armaSel = fuzil;
	
	cout << armaSel;
	
	return 0;
}
