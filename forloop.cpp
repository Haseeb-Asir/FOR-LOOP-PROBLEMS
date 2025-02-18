#include <iostream>
using namespace std;

int main() {

    '''1.Sum of First N Natural Numbers'''
    int N, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    cout << "Sum of first " << N << " natural numbers: " << sum << endl;


    '''2.Factorial of a Number'''
    int N;
    long long factorial = 1; // Using long long to handle large values

    cout << "Enter a positive integer: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    cout << "Factorial of " << N << " is: " << factorial << endl;

    '''3.Multiplication Table'''

    int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= 10; i++) {
        cout << N << " x " << i << " = " << (N * i) << endl;
    }


    '''4. Printing a Right-Angled Triangle Pattern'''
    int main() {
        int N;
        cout << "Enter number of rows: ";
        cin >> N;
    
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

    '''5. Check Prime Number'''
    int N;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> N;

    if (N < 2) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << N << " is a prime number." << endl;
    else
        cout << N << " is not a prime number." << endl;


    return 0;
}
