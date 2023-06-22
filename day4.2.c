#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
void readComplex(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imag));
}

// Function to write a complex number
void writeComplex(Complex c) {
    if (c.imag < 0)
        printf("Complex number: %.2f - %.2fi\n", c.real, -c.imag);
    else
        printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

int main() {
    Complex c1, c2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&c1);

    printf("Enter the second complex number:\n");
    readComplex(&c2);

    printf("\n");
    printf("The first complex number is:\n");
    writeComplex(c1);

    printf("The second complex number is:\n");
    writeComplex(c2);

    sum = addComplex(c1, c2);
    printf("Sum of the two complex numbers is:\n");
    writeComplex(sum);

    product = multiplyComplex(c1, c2);
    printf("Product of the two complex numbers is:\n");
    writeComplex(product);

    return 0;
}
