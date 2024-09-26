#include <iostream>

int main(){

  char caractere = '2';
  char caractere2 = 'h';

  std::cout << "Caracteres únicos como: " << caractere
  << " e " << caractere2 << "\n" << "Tamanhos: " << sizeof(caractere, caractere2) 
  << "byte cada caractere" << "\n" << "Endereço carregado na memória RAM: " << (void *)&caractere <<
  "\n" <<  (void *)&caractere2 << "." << std::endl;

  std::cin.get();
  return 0;
}