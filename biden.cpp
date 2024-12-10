#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int sumEvenNumbers(const vector<int>& nums) {
    int sum = 0;
    for (int num : nums) { 
        if (num % 2 == 0) { 
            sum += num;     
        }
    }
    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<int> numbers = { 1, 2, 3, 4, 5, 6 }; 

    int result = sumEvenNumbers(numbers);
    cout << "Сума парних чисел: " << result << endl;

    return 0;
}
