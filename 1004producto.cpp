#include <iostream>
#include <vector>

int main(){

  std::vector<int>entradas(2);
  int produto;

  std::cin >> entradas[0];
  std::cin >> entradas[1];

  produto = entradas[0] * entradas[1];

  std::cout << "PROD = " << produto << std::endl;

  return 0;
}
