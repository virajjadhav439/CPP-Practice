#include <iostream>
using namespace std;

int main() {
    string txt = "programming";
    int freq[256] = {0};

    // Step 1: Count frequency
    for (int i = 0; i < txt.length(); i++) {
        freq[txt[i]]++;
    }

    // Step 2: Find first non-repeating
    for (int i = 0; i < txt.length(); i++) {
        if (freq[txt[i]] == 1) {
            cout << "First non-repeating character: " << txt[i];
            return 0;
        }
    }

    cout << "No non-repeating character found";
    return 0;
}