#include <iostream>
#include <algorithm>

using namespace std;

///Finding common elements in the list
void find_common_elements(int list1[], int size1, int list2[], int size2) {
    cout << "Common elements are: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (list1[i] == list2[j]) {
                cout << list1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

///Finding palindromes
void find_palindromes(string strings[], int size) {
    cout << "Palindromes are: ";
    for (int i = 0; i < size; i++) {
        string str = strings[i];
        string rev_str = str;
        reverse(rev_str.begin(), rev_str.end());
        if (str == rev_str) {
            cout << str << " ";
        }
    }
    cout << endl;
}
///finding primes with algorithm
void sieve_of_eratosthenes_primes(int numbers[], int size) {
    int n = *max_element(numbers, numbers + size);
    bool prime[n + 1];
    fill(prime, prime + n + 1, true);
    int p = 2;
    while (p * p <= n) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
        p++;
    }
    cout << "Prime numbers are: ";
    for (int i = 0; i < size; i++) {
        int num = numbers[i];
        if (num > 1 && prime[num]) {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() {

    int list1[] = {1, 2, 3, 4, 5,6,12,15};
    int list2[] = {2, 4, 6, 8, 10,12,17};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    find_common_elements(list1, size1, list2, size2);

    string list3[] = {"murat", "ada", "ata", "ahmet"};
    int size3 = sizeof(list3) / sizeof(list3[0]);
    find_palindromes(list3, size3);

}