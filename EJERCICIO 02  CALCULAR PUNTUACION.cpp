#include <iostream>
#include <vector>

using namespace std;

int calculateScore(const vector<int>& numbers) {
    int score = 0;
    
    for (size_t i = 0; i < numbers.size(); ++i) {
        int num = numbers[i];
        
        if (num == 5) {
            score += 5; 
        } else if (num % 2 == 0) {
            score += 1; 
        } else {
            score += 3; 
        }
    }
    
    return score;
}

int main() {
    int n;

    cout << "Introduce el número de elementos en la matriz: ";
    cin >> n;

    vector<int> numbers(n);
    
    cout << "Introduce los elementos de la matriz: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << "La puntuación total es: " << calculateScore(numbers) << endl;

    return 0;
}
