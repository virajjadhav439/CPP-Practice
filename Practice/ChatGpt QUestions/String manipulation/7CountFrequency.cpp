#include <iostream>
using namespace std;

int main() {
    string txt = "aba";

    int freq[256] = {0};  // ASCII size

    // Count frequency
    for (int i = 0; i < txt.length(); i++) {
        freq[txt[i]]++;
    }

    // Print frequency
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }

    return 0;
}