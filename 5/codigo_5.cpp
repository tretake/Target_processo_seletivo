#include <iostream>
#include <string>

int main() {
    std::cout << "Digite uma string: ";
    std::string str;
    std::getline(std::cin, str); // Lê a string, incluindo espaços

    int n = str.length();

    for (int i = 0; i < n / 2; ++i) {
	
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    std::cout << "String invertida: " << str << std::endl;

    return 0;
}