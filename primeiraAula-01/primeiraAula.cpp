#include <iostream>

int main()
{
  std::cout << "Pressione enter para prosseguir" << std::endl;
  /*Exibe a mensagem “Pressione enter para prosseguir”.
  Aguarda o usuário pressionar a tecla Enter.
  Armazena a entrada do usuário na variável var (embora, nesse caso,
   a variável não seja realmente usada depois) Eplicação para comando abaixo. */
  // system("read -p 'Pressione enter para prosseguir' var");
  std::cin.get();
  /*Ja o método acima pausa a execução até o usuário interagir*/
  return 0;
}