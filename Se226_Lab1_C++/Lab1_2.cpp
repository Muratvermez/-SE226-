#include <iostream>
using namespace std;

    int main() {
    int var1, var2, sum, diff, prod;

    cout << "Please enter an integer:";
    cin >> var1;
    cout << "Please enter second integer:";
    cin >> var2;

    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;

    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;
    cout << "sum of var1 and var2: " << sum << endl;
    cout << "diff of var1 and var2: " << diff << endl;
    cout << "prod of var1 and var2: " << prod << endl;

    return 0;
}
