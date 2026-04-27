#include <iostream>
using namespace std;

int main() {
    string txt1 = "ABCD";
    string txt2 = "DCBA";

    int freq1[256] = {0};
    int freq2[256] = {0};

    // Count frequency of txt1
    for (int i = 0; i < txt1.length(); i++) {
        freq1[txt1[i]]++;
    }

    // Count frequency of txt2
    for (int i = 0; i < txt2.length(); i++) {
        freq2[txt2[i]]++;   // ✅ fixed
    }

    // Compare arrays
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            cout << "Not Anagrams";
            return 0;
        }
    }

    cout << "Are Anagrams";
    return 0;
}