#include <iostream>

using namespace std;

/*
 * Factorial
 * the product of all positive integers less than or equal 
 * to a given positive integer and denoted by that integer 
 * and an exclamation point (!)
 * 
 * n! = n * (n-1) * (n-2) * ... * 1
 * 
 * For example, 7! = 7 * 6 * 5 * 4 * 3 * 2 * 1 
 * 
 * Factorial zero is defined as equal to 1.
*/


// Iterative Factorial
unsigned long long IterativeFactorial( int n)
{
    unsigned long long total = 1;

    for (int i=1; i<=n; i++) {
        total *= i;
    } 
    return total; //Dummy Return
}


unsigned long long RecursiveFactorial (int n) {

    if (n == 1) {
        return 1;
    } else {
        return RecursiveFactorial(n-1) * n;
    }
}

int main() {

    cout << "Factorial(3) = " << IterativeFactorial(3) << endl;
    cout << "Factorial(50) = " << IterativeFactorial(50) << endl;

    cout << "Factorial(3) = " << RecursiveFactorial(3) << endl;
    cout << "Factorial(50) = " << RecursiveFactorial(50) << endl;

}