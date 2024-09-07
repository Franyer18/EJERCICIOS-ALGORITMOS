#include <iostream>
#include <vector>

using namespace std;

vector<unsigned long long> generateTribonacci(const unsigned long long initial[3], int n) {
    vector<unsigned long long> sequence;
    
    if (n <= 0) {
        return sequence;
    }

    if (n >= 1) sequence.push_back(initial[0]);
    if (n >= 2) sequence.push_back(initial[1]);
    if (n >= 3) sequence.push_back(initial[2]);

    unsigned long long a = initial[0];
    unsigned long long b = initial[1];
    unsigned long long c = initial[2];
    unsigned long long d;

    for (int i = 3; i < n; ++i) {
        d = a + b + c;
        sequence.push_back(d);
        a = b;
        b = c;
        c = d;
    }

    return sequence;
}

int main() {
    unsigned long long initial[3];
    int n;

    cout << "Introduce  tres  números para la secuencia Tribonacci: ";
    cin >> initial[0] >> initial[1] >> initial[2];

    cout << "Introduce el número  a devolver: ";
    cin >> n;

    vector<unsigned long long> tribonacciSequence = generateTribonacci(initial, n);

    cout << "Los primeros " << n << " términos de la secuencia Tribonacci son: ";
    for (size_t i = 0; i < tribonacciSequence.size(); ++i) {
        cout << tribonacciSequence[i];
        if (i < tribonacciSequence.size() - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
