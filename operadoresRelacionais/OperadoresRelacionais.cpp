#include <iostream>

int main(){
   bool Valendo = 1;
do{
  
  char Inicio, Fim;
  float Num1, Num2;
  std::cout << "Gostaria de começar o programa? | Responda S p/ sim e N p/ não ";
  std::cin >> Inicio;
  if(Inicio == 's' || Inicio == 'S'){
    std::cout << "Indique um valor para Num1: ";
    std::cin >> Num1;
    std::cout << "Indique um valor para Num2: ";
    std::cin >> Num2; 
    std::cout << "Caso o resultado do teste for verdadeiro mostrará no console o valor 1" << "\n";
    std::cout << "Ja se o teste resultar em falso, mostrará o valor 0" << "\n";
    std::cout << "Num1 igual a Num2: " << (Num1 == Num2) << std::endl;
    std::cout << "Num1 maior a Num2: " << (Num1 > Num2) << std::endl;
    std::cout << "Num1 menor a Num2: " << (Num1 < Num2) << std::endl;
    std::cout << "Num1 maior ou igual a Num2: " << (Num1 >= Num2) << std::endl;
    std::cout << "Num1 menor ou igual a Num2: " << (Num1 <= Num2) << std::endl;
    std::cout << "Num1 diferente de Num2: " << (Num1 != Num2) << std::endl;
    
  }else{
    std::cout << "Deseja encerrar o programa? || Responda S p/ sim e N p/ não  ";
    std::cin >> Fim;
    if(Fim == 's' || Fim == 'S'){
      Valendo = 0;

    }
  }

  }while(Valendo == 1);
   
  system("read -p 'Pressione ENTER para prosseguir...' var");
  return 0;
}

