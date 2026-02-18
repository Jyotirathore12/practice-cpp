#include <iostream>
#include <vector>
#include <algorithm>    // sort, for_each, count_if
#include <numeric>      // accumulate
#include <unordered_map> // 🔥 New Feature: Hash Map

using namespace std;

// Function declarations
void print();
void displayVector(const vector<int>& v);

int main() {

    cout << "code to run" << endl;

    int a = 5;
    int b = 3;
    int c = a + b;
    cout << "Sum: " << c << endl;

    // while loop
    while (a) {
        cout << a << endl;
        a--;
    }

    // for loop + continue
    for (int i = 0; i < 10; i++) {
        if (i == 3) continue;
        cout << i << " ";
    }
    cout << endl;

    // switch case
    int i;
    cout << "Enter value of i (1 or 2): ";
    cin >> i;

    switch (i) {
        case 1:
            cout << "Yes" << endl;
            break;
        case 2:
            cout << "No" << endl;
            break;
        default:
            cout << "None" << endl;
            break;
    }

    // function call
    print();

    // STL vector + sorting
    vector<int> numbers = {50, 10, 40, 20, 30};
    sort(numbers.begin(), numbers.end());
    displayVector(numbers);

    // 🔥 Lambda function with for_each
    cout << "Even numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int num) {
        if (num % 2 == 0)
            cout << num << " ";
    });
    cout << endl;

    // Lambda with count_if
    int evenCount = count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });
    cout << "Count of even numbers: " << evenCount << endl;

    // 🔥 New Feature: unordered_map (Frequency Counter)
    unordered_map<int, int> freq;

    for (int num : numbers) {
        freq[num]++;
    }

    cout << "Frequency of elements:" << endl;
    for (const auto& p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

// Function definitions
void print() {
    cout << "What's in your mind?" << endl;
    cout << "Here's my day in my life" << endl;
}

void displayVector(const vector<int>& v) {
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}
