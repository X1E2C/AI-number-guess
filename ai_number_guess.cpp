#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <windows.h>
#include <sstream>

using namespace std;

// Convert integer to string
string toString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    SetConsoleOutputCP(437); // English-compatible encoding

    int low = 1, high = 100, guess;

    // Kullanýcýya baþlangýçta tahmin aralýðýný gösterelim
    cout << "Think of a  integer number between " << low << " and " << high << "." << endl<<endl;
    cout << "I will try to guess it!" << endl<<endl;

    while (true) {
        guess = (low + high) / 2;
        cout << "AI Guess: " << guess << endl;

        cout << "Higher, lower, or correct? ";
        string userResponse;
        cin >> userResponse;

        if (userResponse == "correct") {
            cout << "AI guessed correctly: " << guess << endl;
            break;
        } else if (userResponse == "lower") {
            high = guess - 1;
        } else if (userResponse == "higher") {
            low = guess + 1;
        } else {
            cerr << "Invalid input! Please enter 'higher', 'lower', or 'correct'." << endl;
        }
    }

    return 0;
}

