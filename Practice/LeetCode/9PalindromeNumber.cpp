#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x = x / 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution obj;

    int num;
    cout << "Enter number: ";
    cin >> num;

    if (obj.isPalindrome(num))
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

    return 0;
}