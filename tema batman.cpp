// tema batman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int nivel_activitate_criminala;
    std::cout << "Introdu nivelul activitatii criminale: ";
    std::cin >> nivel_activitate_criminala;

    if (nivel_activitate_criminala < 5) {
        std::cout << "Ma descurc\n";
    }
    else if (nivel_activitate_criminala >= 5 && nivel_activitate_criminala <= 10) {
        std::cout << "Ajuta-ma Batman\n";
    }
    else {
        std::cout << "Noroc Batman, te descurci\n";
    }

    return 0;
}