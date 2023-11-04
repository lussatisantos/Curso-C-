# include <iostream>
# include <stdio.h>
# include <stdlib.h>

using namespace std;

int main() {
	char *vnome;
	vnome = (char *) malloc(sizeof(char));
	
	gets(vnome);
	cout << vnome;

	return 0;
}
