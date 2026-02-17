#include <iostream>
#include <vector>
#include <algorithm>   
#include <numeric>     // for accumulate
using namespace std;

void print();
void displayVector(const vector<int>& v);

int main() {

    cout << "code to run" << endl;

    int a = 5;
    int b = 3;
    int c = a + b;
    cout << "Sum: " << c << endl;

    while (a) {
        cout << a << endl;
        a--;
    }

    for (int i = 0; i < 10; i++) {
        if (i == 3) continue;
        cout << i << " ";
    }
    cout << endl;

    int i;
    cout << "Enter value of i (1 or 2): ";
    cin >> i;

    switch (i) {
        case 1: cout << "Yes" << endl; break;
        case 2: cout << "No" << endl; break;
        default: cout << "None" << endl; break;
    }

    print();

    // STL vector + sorting
    vector<int> numbers = {50, 10, 40, 20, 30};
    sort(numbers.begin(), numbers.end());
    displayVector(numbers);

    // 🔥 New Feature: Lambda Function
    cout << "Even numbers: ";
    for_each(numbers.begin(), numbers.end(), [](int num) {
        if (num % 2 == 0)
            cout << num << " ";
    });
    cout << endl;

    // Using lambda with count_if
    int evenCount = count_if(numbers.begin(), numbers.end(), [](int num) {
        return num % 2 == 0;
    });

    cout << "Count of even numbers: " << evenCount << endl;

    return 0;
}

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
