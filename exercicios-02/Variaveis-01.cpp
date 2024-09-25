#include <iostream>
#include <wchar.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "pt_BR.UTF-8");
  int NumVidas = 5;
  int Score = 1400;
  std::cout << "*****************INICIO*****************" << std::endl;
  std::cout << "Vidas do jogador: " << NumVidas << std::endl;
  std::cout << "Endereço que NumVidas ocupa na memoria RAM: " << &NumVidas << 
  " e o tamanho dessa variável é: " << sizeof(NumVidas) << " Bytes" <<std::endl;
  std::cout << "Pontuação do jogador: " << Score << std::endl;
  std::cout << "Endereço que Score(Pontuação) ocupa na memoria RAM: " << &Score << 
  " e o tamanho dessa variável é: " << sizeof(Score) << " Bytes" << std::endl;
  std::cout << "**********************************" << std::endl;

  std::cout << "****************DURANTE*****************" << std::endl;
  Score = Score + 150;
  NumVidas -= 1;
  std::cout << "Vidas do jogador: " << NumVidas << std::endl;
  std::cout << "Pontuação do jogador: " << Score << std::endl;

  
  std::cin.get();
  return 0;
}