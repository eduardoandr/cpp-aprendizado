#include <iostream>
#include <iomanip>//Necessario para usar o setPrecision

int main(){
  float Num1, Num2, Num3;
  float Resultado = 0.0;
  std::cout << "Informe o primeiro número: ";
  std::cin >> Num1;
  std::cout << "Informe o segundo número: ";
  std::cin >> Num2;
  std::cout << "Informe o terceiro número: ";
  std::cin >> Num3;
  Resultado = (Num1 + Num2 + Num3) / 3;

//std::fixed para o resultado sempre conter as casas decimais descritas no setPrecision
  std::cout << "A média aritmética dos números informados é: " << std::fixed
  << std::setprecision(2) << Resultado << std::endl;
  system("read -p 'Pressione enter para prosseguir' var");
  std::cin.get();
  return 0;
}