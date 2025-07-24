#include <stdio.h>
#include <math.h>

double my_cos(double x, double epsilon) {
    double term = 1.0;
    double sum = term;
    int n = 1;

    while (term > epsilon || term < -epsilon) {
        term *= -x * x / ((2 * n - 1) * (2 * n));
        sum += term;
        n++;
    }

    return sum;
}

double my_exp(double x, double epsilon) {
    double term = 1.0;
    double sum = term;
    int n = 1;

    while (term > epsilon || term < -epsilon) {
        term *= x / n;
        sum += term;
        n++;
    }

    return sum;
}

double my_sin(double x, double epsilon) {
    double term = x;
    double sum = term;
    int n = 1;

    while (term > epsilon || term < -epsilon) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    double x, epsilon;

    scanf("%lf", &x);

    scanf("%lf", &epsilon);


    printf("e^x   = %.10f (math: %.10f)\n", my_exp(x, epsilon), exp(x));
    printf("cos x = %.10f (math: %.10f)\n", my_cos(x, epsilon), cos(x));
    printf("sin x = %.10f (math: %.10f)\n", my_sin(x, epsilon), sin(x));
}


