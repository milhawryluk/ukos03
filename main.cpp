#inclue <iostream>

int main() {

int liczba1, liczba2, liczba3;
float srednia;

std::cout << "Podaj 3 liczby calkowite" << std::endl;
std::cin >> liczba1, liczba2, liczba3;

srednia = (liczba1 + liczba2 + liczba3)/3;

cout << "Srednia: " << srednia;

return 0;
}
