#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Funksiya prototipi
double f(double x);
double fourierSeries(double x, int n);

int main() {
    double x;
    int n;

    std::cout << "x ni kiriting: ";
    std::cin >> x;

    std::cout << "n ni kiriting: ";
    std::cin >> n;

    double result = fourierSeries(x, n);
    std::cout << "Furʼye qatori natijasi: " << result << std::endl;

    return 0;
}

// f(x) ni hisoblash uchun funksiya
double f(double x) {
    return 4 * x - 3;
}

// Furʼye qatorini hisoblash uchun funksiya
double fourierSeries(double x, int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double coefficient = (2.0 * i - 1.0) * PI;
        sum += (1.0 / coefficient) * sin(coefficient * x);
    }

    return sum;
}