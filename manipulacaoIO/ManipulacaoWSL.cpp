#include <iostream>
#include <string>
#include <iomanip>
#include <ncurses.h>

using namespace std;

int main(){
  initscr(); //Inicializa a tela
  int LarguraConsole = COLS; //Obtem largura do console
  string str = "Texto";
  int Tam = str.length(); //Tamanho da String
  if(Tam % 2 == 0) str += " ";
  mvprintw(LINES / 2, (LarguraConsole / 2) - (Tam / 2), "%s", str.c_str()); //Centraliza
  refresh();
  getch();
  endwin();
  return 0;
}