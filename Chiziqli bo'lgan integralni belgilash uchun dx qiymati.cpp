#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

double f(double x) {
    return 1.0;
}

double calculateCoefficient(double n) {
    double a0 = 0.0;
    double an = 0.0;
    double bn = 0.0;
    double dx = 0.001; // Chiziqli bo'lgan integralni belgilash uchun dx qiymati
    double x = 0.0;

    while (x <= PI) {
        a0 += f(x) * dx;
        an += f(x) * cos(n * x) * dx;
        bn += f(x) * sin(n * x) * dx;
        x += dx;
    }

    a0 = a0 / PI;
    an = (1.0 / PI) * an;
    bn = (1.0 / PI) * bn;

    return (an * an) - (bn * bn);
}

int main() {
    double n;
    std::cout << "n ni kiriting: ";
    std::cin >> n;

    double result = calculateCoefficient(n);
    std::cout << "Qatorning yig'indisi: " << result << std::endl;

    return 0;
}