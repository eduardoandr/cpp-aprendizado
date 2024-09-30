#include <iostream>
#define NUMERO_VIDAS 10

int main(){

  const int NUM_VIDAS = 10;
  int totalVidas;
  totalVidas = NUM_VIDAS - 1;

  std::cout << "NUM_VIDAS: " << NUM_VIDAS << std::endl;
  std::cout << "NUMERO_VIDAS: " << NUMERO_VIDAS << std::endl;
  std::cout << "totalVidas: " << totalVidas << std::endl;
  std::cin.get();
  return 0;
}
/*
const NUM_VIDAS = 10;
O trecho acima cria região na memória para armazenar a constante

Ja o trecho abaixo:
#define NUM_VIDAS = 10;
Não cria nada na memória, apenas um texto que sera substituido no pre-processamento
*/