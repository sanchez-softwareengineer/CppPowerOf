#include <iostream>
using namespace std;

void IterativePow(int base, int exponent, int answer) {

    for (int i = 0; i < exponent; i++) {
        answer *= base;
    }
    cout << "The result of " << base << " to the power of " << exponent << " is " << answer << endl;
}

void recursivePow(int base, int exponentA, int answer, int exponentB) {
    if (exponentB <= 0) {
        cout << "The result of " << base << " to the power of " << exponentA << " is " << answer << endl;
        return;
    }
    answer *= base;
    recursivePow(base, exponentA, answer, exponentB-1);
}


int main()
{
    int base;
    int exponentA;
    int answer{1};
    int exponentB;

    cout << "The following is demonstration of iterativePow():\n";

    cout << "Please enter a value for the base, a: ";
    cin >> base;

    cout << "Please enter a value for the power, n: ";
    cin >> exponentA;

    IterativePow(base, exponentA, answer);

    cout << "The following is demonstration of recursivePow():\n";

    cout << "Please enter a value for the base, a: ";
    cin >> base;

    cout << "Please enter a value for the power, n: ";
    cin >> exponentA;

    exponentB = exponentA;
    recursivePow(base, exponentA, answer, exponentB);

}
