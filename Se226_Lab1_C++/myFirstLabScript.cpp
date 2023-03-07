#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string id;

    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name << "\n";

    cout << "What is your student id?\n";
    cin >> id;
    cout << "Your ID is: " << id << endl;

    return 0;
}

