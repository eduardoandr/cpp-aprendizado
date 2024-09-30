#include <iostream>

int main(){
  /*int Numero;
  Numero = 32;
  std::cout << "Valor: " << Numero << "\n" << "Endereço na memoria: " 
  << &Numero << "\n" << "Tamanho da variável: " << sizeof(Numero) << "Bytes" << std::endl;
  
  std::cin.get();
  return 0;*/
  int NumComputadores;
  short int SerialComputadores;
  NumComputadores = 100;
  SerialComputadores = 11111;
  std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
  std::cout << "NumComputadores: " << NumComputadores << std::endl;
  std::cout << "Tamanho de NumComputadores e SerialComputadores: " << sizeof(NumComputadores)
  << "Bytes" << std::endl;
  std::cout << "SerialComputadores: " << SerialComputadores << std::endl;  
  std::cout << "Tamanho de NumComputadores e SerialComputadores: " << sizeof(SerialComputadores)
  << "Bytes" << std::endl;
  std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
  std::cin.get();
  return 0;
}