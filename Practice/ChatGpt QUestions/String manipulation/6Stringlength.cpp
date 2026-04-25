// Find length of string without using strlen()
#include <iostream>
using namespace std;

int main() {
    string txt = "Hello World";
    int count = 0;

    // For every character 'c' in txt
    for (char c : txt) {
        count++;
    }

    cout << "Length is: " << count << endl;
    return 0;
}