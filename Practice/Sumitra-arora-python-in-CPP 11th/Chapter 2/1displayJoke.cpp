// Write a program that displays joke.But the punchline is displayed when the user presses enter key

#include <iostream>
using namespace std;

int main(){
    cout << "Why don't programmers like nature?" << endl;
    cout << "Press Enter to see the punchline...";
    
    cin.get();   // Waits for Enter key
    
    cout << "\nBecause it has too many bugs!" << endl;
    return 0;
}