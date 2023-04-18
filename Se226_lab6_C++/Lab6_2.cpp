#include <iostream>
#include <cmath>

#define cin 0
const char *cout;//hocam bir şeyler denedim ama hataları çözemedim

unsigned long endl;

double calculateSum(int n, int k = 1) {
    if (k > n) {
        return 0;
    }
    double term = pow(-1, k + 1) / k;//evaluating series

    return term + calculateSum(n, k + 1);//making recursive using return
}

double calculateSum() {

    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0) {
        cout << "Number must be positive! " << endl;
        return 0;
    }

    return calculateSum(n, 1);
}

int main() {

    double result = calculateSum();

    // Print the result
    cout << "Result of the equation is: " << result << endl;

    return 0;
}