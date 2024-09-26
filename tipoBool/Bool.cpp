#include <iostream>

int main(){
  //Váriavel com um "b" no inicio por convenção para declarar booleanos
  bool bEncontrou = 1;
  std::cout << "A váriavel bEncontrou é: " << bEncontrou << std::endl;
  bEncontrou = 0;
  std::cout << "A váriavel bEncontrou é: " << bEncontrou << std::endl;
  bEncontrou = true;
  std::cout << "A váriavel bEncontrou é: " << bEncontrou << std::endl;
  bEncontrou = false;
  std::cout << "A váriavel bEncontrou é: " << bEncontrou << std::endl;
  //Aqui notamos que qualquer valor atribuido a váriavel que seja diferente de 
  //zero, torna em true(verdadeiro || 1)
  bEncontrou = "0x7ffec14596660x7ffec1459667";
  std::cout << "A váriavel bEncontrou é: " << bEncontrou << std::endl;


  std::cin.get();
  return 0;
}