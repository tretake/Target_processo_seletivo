#include <iostream>

using namespace std;

bool pertenceFibonacci(int numero) {

    int a = 0;
    int b = 1;
    
	
    if (numero == a || numero == b) {
        return true;
    }
    
    int proximo = a + b;
    
    
    while (proximo <= numero) {
        if (proximo == numero) {
            return true;
        }
        a = b;
        b = proximo;
        proximo = a + b;
    }
    
    return false;
}

int main() {
    int numero;
    
    cout << "Informe um número: ";
    cin >> numero;
    
    if (pertenceFibonacci(numero)) {
        cout << "O número " << numero << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << "O número " << numero << " não pertence à sequência de Fibonacci." << endl;
    }
    
    return 0;
}