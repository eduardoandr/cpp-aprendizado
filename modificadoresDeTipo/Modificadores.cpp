#include <iostream>

int main()
{
	std::cout << "Tamanho char : " << sizeof(char) << "Bytes" << std::endl;
	std::cout << "Tamanho int : " << sizeof(int) << "Bytes" << std::endl;
	std::cout << "Tamanho short int : " << sizeof(short int) << "Bytes" << std::endl;
	std::cout << "Tamanho long int : " << sizeof(long int) << "Bytes" << std::endl;
	std::cout << "Tamanho long long int : " << sizeof(long long int) << "Bytes" << std::endl;
	std::cout << "Tamanho float : " << sizeof(float) << "Bytes" << std::endl;
	std::cout << "Tamanho double : " << sizeof(double) << "Bytes" << std::endl;
	std::cout << "Tamanho long double : " << sizeof(long double) << "Bytes" << std::endl;
	std::cout << "Tamanho wchar_t : " << sizeof(wchar_t) << "Bytes" << std::endl;
	std::cin.get();

	return 0;
}