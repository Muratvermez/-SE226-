#include <iostream>
#include <cmath>

using namespace std;

double calculateSum(int n, int k = 1) {
    if (k > n) {
        return 0;
    }
    double term = pow(-1, k + 1) / k;//evaluating series

    return term + calculateSum(n, k + 1);//making recursive using return
}

int main() {
    int n;
    cout << "Enter a number ";
    cin >> n;

    double result = calculateSum(n);

    cout << "The result of the equation is: " << result << endl;

    return 0;
}




