#include <iostream>
using namespace std;

int main() {
    string txt = "programming";
    int freq[256] = {0};

    string result = "";

    // traverse from end
    for (int i = txt.length() - 1; i >= 0; i--) {
        if (freq[txt[i]] == 0) {
            result += txt[i];
            freq[txt[i]]++;
        }
    }

    // reverse result
    for (int i = result.length() - 1; i >= 0; i--) {
        cout << result[i];
    }

    return 0;
}