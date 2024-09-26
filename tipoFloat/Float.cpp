#include <iostream>
#include <iomanip>

int main(){

 float Flutuante = 25.55f;
 double Duplo = 12345.54321;
  std::cout << "****************************************************" << std::endl;
  std::cout << "Números fracionários, como a várialvel: Flutuante " << Flutuante << "\n" <<
  "No endereço de memória RAM: " << &Flutuante << "\n" << "Tamanho: " <<
  sizeof(Flutuante) << "Bytes" << std::endl;
  std::cout << "****************************************************" << std::endl;

  std::cout << "Números fracionários, como a várialvel: Duplo " << 
  std::setprecision(10) << Duplo << "\n" <<
  "No endereço de memória RAM: " << &Duplo << "\n" << "Tamanho: " <<
  sizeof(Duplo) << "Bytes" << std::endl;
  std::cout << "****************************************************" << std::endl;

  std::cin.get();
  return 0;
}
  /*
  float = 7 digitos;
  double = 15 digitos;
  long double = 19 digitos;
  */
