#include <iostream>
#include <vector>


using namespace std;

int main(){
  vector<int>entradas(2);
  int soma = 0;

  cin >> entradas[0];
  cin >> entradas[1];

  soma = entradas[0] + entradas[1];

  cout << "SOMA = " << soma << endl;

  return 0;

}

