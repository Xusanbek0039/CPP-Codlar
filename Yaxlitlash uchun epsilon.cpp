#include <iostream>
#include <cmath>

const double EPSILON = 0.0001; // Yaxlitlash uchun epsilon

double f(double x) {
    return cbrt(1 + x * x);
}

double numericalIntegration(double a, double b, int n) {
    double dx = (b - a) / n;
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        double x = a + (i + 0.5) * dx;
        sum += f(x) * dx;
    }

    return sum;
}

int main() {
    double a, b;
    int n;

    std::cout << "a ni kiriting: ";
    std::cin >> a;
    std::cout << "b ni kiriting: ";
    std::cin >> b;
    std::cout << "n ni kiriting: ";
    std::cin >> n;

    double result = 1.0 / 6.0 * numericalIntegration(a, b, n);
    std::cout << "Natija: " << result << std::endl;

    return 0;
}