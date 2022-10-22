//Add two complex numbers by passing structure to a function as argument.
#include <stdio.h>
typedef struct complex {
    float real;
    float imag;
} complex;

complex add(complex num1, complex num2);

int main() {
    complex num1, num2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = add(num1, num2);

    printf("Sum = %.1f + %.1fi", result.real, result.imag);
    return 0;
}

complex add(complex num1, complex num2) {
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return (temp);
}
