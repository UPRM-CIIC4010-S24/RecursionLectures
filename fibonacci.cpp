#include <iostream>

using namespace std;

/*
 * Fibonacci sequence
 * sequence of numbers:  0, 1, 1, 2, 3, 5, 8, 13, 21, …,
 * 
 * The sequence of numbers where the first two numbers are 0 and 1, 
 * with each subsequent number being defined as the sum of the previous 
 * two numbers in the sequence.
 * 
 * note: the input parameter is the position in the sequence
 * 
 * the nth Fibonacci number F(n) = F(n − 1) + F(n − 2).
 * F(0) = 0
 * F(1) = 1
*/

// Iterative Fibonacci
    long iterativeFibonacci(long n)
    {

        long f0 = 0;
        long f1 = 1;
        for (int i=1; i<n; i++) {
            long f2 = f1 + f0;
            f0 = f1;
            f1 = f2;
        }
        return f1;

    }

long recursiveFibonacci(long n) {

    if (n == 0) return 0;
    if (n == 1) return 1;
    return recursiveFibonacci(n-1) + recursiveFibonacci(n-2);

}

long helperTailRecursiveFibonacci(long n, long f0, long f1) {

    if (n == 0) return f0;
    if (n == 1) return f1;
    return helperTailRecursiveFibonacci(n-1, f1, f0+f1);

}

long tailRecursiveFibonacci(long n) {

    return helperTailRecursiveFibonacci(n,0,1);

}

int main() {

    // cout << "iterativeFibonacci(4) = " << iterativeFibonacci(4) << endl;

    // cout << "iterativeFibonacci(3)" << iterativeFibonacci(3) << endl;

    for (int i=0; i<100; i++) {

        cout << "tailRecursiveFibonacci(" << i << ") = " << tailRecursiveFibonacci(i) << endl;

    }

}