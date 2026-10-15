#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
const double t = 3.0;
double x;
double a, b, y;
int A, B, C;
int usl_a, usl_b;

int main()
{
    setlocale(LC_ALL, ".UTF-8");
    task1();
    task2();
    task3();
    return 0;
}

int task1()
{
    double gr, rad;

    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    rad = gr * M_PI / 180;

    printf("sin(%.2f град) = %.6f\n", gr, sin(rad));

    system("pause");
    return 0;
}

int task2()
{
    printf("Введите x: ");
    scanf("%lf", &x);

    a = 1.0 / t + pow(x, 3);
    b = t * t * sqrt(fabs(a + x));
    y = pow(log(fabs(b + a * a)), 5);

    printf("x = %.1e\n", x);
    printf("y = %.2f\n", y);

    system("pause");
    return 0;
}
int task3()
{
    printf("Введите x: ");
    scanf("%lf", &x);
    a = 1.0 / t + pow(x, 3);
    b = t * t * sqrt(fabs(a + x));
    y = pow(log(fabs(b + a * a)), 5);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    usl_a = (A % 2 == 0) != (B % 2 == 0);
    usl_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("A = %d, B = %d, C = %d\n", A, B, C);
    printf("а) условие выполнено (1 - да, 0 - нет): %d\n", usl_a);
    printf("б) условие выполнено (1 - да, 0 - нет): %d\n", usl_b);

    system("pause");
    return 0;
}