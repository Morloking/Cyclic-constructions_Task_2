#include <iostream>

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int x{ 0 }; int summ{ 0 };
    std::cout << "Ââåäèòå öåëîå ÷èñëî:\n";
    std::cin >> x;
    if (x < 0) x *= -1;
    do {
        summ += x % 10;
        x /= 10;
    } while (x != 0);
    std::cout << "Ñóììà öèôð: " << summ << "\n";
}
