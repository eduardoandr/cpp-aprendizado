#include <iostream>

int main(){

  //Exemplo de múltiplas entradas no mesmo cin =>
  /*Embora isso seja possível e interessante para quem esta testando um programa, recomendado que na versão final você utilize cada entrada recebida separadamente para deixar o código mais legível....*/
  int Num1, Num2, Num3, Num4;
  std::cout << "Digite quatro números, com espaço entre eles e após ENTER: ";
  std::cin >> Num1 >> Num2 >> Num3 >> Num4;

  std::cout << "\nSoma: " << (Num1 + Num2 + Num3 + Num4) << std::endl;
  std::cout << "\nMedia: " << ((Num1 + Num2 + Num3 + Num4) / 4) << std::endl;

  std::cin.get();
  return 0;
}
  /*
  Exemplo de entrada de dados pelo usuário =>
  int N01, N02;

  std::cout << "Digite o primeiro número: ";
  std::cin >> N01;
  std::cout << "Digite o segundo número: ";
  std::cin >> N02;

  std::cout << "Valor de N01: " << N01 << "\n" <<
  "Valor de N02: " << N02 << "\n";
  
  */
  
  