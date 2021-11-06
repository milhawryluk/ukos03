#include <iostream>


int main() {

int liczba1, liczba2, liczba3;
float srednia;

std::cout << "Podaj 3 liczby calkowite, nieujemne" << std::endl;
std::cin >> liczba1, liczba2, liczba3;

srednia = (liczba1 + liczba2 + liczba3)/3;

cout << "Srednia z liczb to: " << srednia;

return 0;
}
