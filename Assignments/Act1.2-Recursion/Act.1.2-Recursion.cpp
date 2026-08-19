// Jared Aldana Palacios
// A00844802
#include <iostream>
using namespace std;

int factorial (int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n - 1);
}

int sumIterative(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int sumRecursive(int n){
    if (n == 1){
        return 1;
    }
    return n + sumRecursive(n-1);
}

int sumFormula(int n) {
    return n * (n + 1)/2;
}

int fibonacciIterative (int n){
    if (n <= 2){
        return 1;
    }
    int a = 1, b = 1, c;
    for (int i = 3; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int fibonacciRecursive(int n){
    if (n <= 2){
        return 1;
    }
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int bacteriasIterative(int n){
    int bacteria = 1;
    for (int i = 1; i <= n; i++){
        int births = static_cast<int>(bacteria * 3.78);
        int deaths = static_cast<int>(bacteria * 2.34);
        bacteria += births - deaths;
    }
    return bacteria;
}

int bacteriasRecursive(int n){
    if (n == 0){
        return 1;
    }
    int bacteria = bacteriasRecursive(n - 1);
    int births = static_cast<int>(bacteria * 3.78);
    int deaths = static_cast<int>(bacteria * 2.34);
    return bacteria + births - deaths;
}

double investmentIterative(double amount, int months){
    for (int i = 1; i <= months; i++){
        amount += amount * 0.1875;
    }
    return amount;
}

double investmentRecursive(double amount, int months){
    if (months == 0){
        return amount;
    }
    return investmentRecursive(amount + amount * 0.1875, months - 1);
}

double powIterative(double base, int exponent){
    double result = 1;
    for (int i = 0; i < exponent; i++){
        result *= base;
    }
    return result;
}

double powRecursive(double base, int exponent){
    if (exponent == 0){
        return 1;
    }
    return base * powRecursive(base, exponent - 1);
}

int main() {
    // Suma Factorial
    cout << "el factorial de 5 es: " << factorial(5) << endl ;
    // Suma Iterativa
    cout << "La suma iterativa de 5 es: " << sumIterative(5) << endl;
    // Suma Recursica
    cout << "La suma recursiva de 5 es: " << sumRecursive(5) << endl;
    // Suma Formula
    cout << "La suma formula de 5 es: " << sumFormula(5) << endl;
    // Fibonacci Iterativa
    cout << "La fibonacci iterativa de 5 es: " << fibonacciIterative(5) << endl;
    // Fibonacci Recursiva
    cout << "La fibonacci recursiva de 5 es: " << fibonacciRecursive(5) << endl;  
    // Bacterias Iterative
    cout << "La cantidad de bacterias iterativa de 5 es: " << bacteriasIterative(5) << endl;
    // Bacterias Recursiva 
    cout << "La cantidad de bacterias recursiva de 5 es: " << bacteriasRecursive(5) << endl;
    // Investment Iterative
    cout << "La cantidad de interes iterativa de 5 meses es: " << investmentIterative(1000, 5) << endl;
    // Investment Recursive
    cout << "La cantidad de interes recursiva de 5 meses es: " << investmentRecursive(1000, 5) << endl;
    // Potencia Iterativa
    cout << "La potencia iterativa de 2 elevado a 5 es: " << powIterative(2, 5) << endl;
    // Potencia Recursiva
    cout << "La potencia recursiva de 2 elevado a 5 es: " << powRecursive(2, 5) << endl;

}

