#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>entradas(2);
	int resposta;

	cin>>entradas[0];
	cin>>entradas[1];

	resposta = entradas[0] + entradas[1];

	cout << "X = " << resposta << endl;

	return 0;

}

	
	
