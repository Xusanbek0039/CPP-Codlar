#include <iostream>
#include <cmath>

// Funksiya prototipi
double integral(double a, double b, double dx);

int main() {
    double a, b, dx;
    double result;

    // Kirish ma'lumotlarini olish
    std::cout << "a ni kiriting: ";
    std::cin >> a;
    std::cout << "b ni kiriting: ";
    std::cin >> b;
    std::cout << "dx ni kiriting: ";
    std::cin >> dx;

    // Integralni hisoblash va natijani chiqarish
    result = integral(a, b, dx);
    std::cout << "Natija: " << result << std::endl;

    return 0;
}

// Integralni hisoblash uchun funksiya
double integral(double a, double b, double dx) {
    double sum = 0.0;
    double x = a;

    while (x < b) {
        sum += 1 - std::cos(x);
        x += dx;
    }

    return sum * dx;
}