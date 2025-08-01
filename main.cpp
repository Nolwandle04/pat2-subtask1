#include <iostream>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main() {
    // Morse Code Map for A–Z and space
    map<char, string> morseCode = {
        {'A', ".-"},    {'B', "-..."},  {'C', "-.-."},  {'D', "-.."},
        {'E', "."},     {'F', "..-."},  {'G', "--."},   {'H', "...."},
        {'I', ".."},    {'J', ".---"},  {'K', "-.-"},   {'L', ".-.."},
        {'M', "--"},    {'N', "-."},    {'O', "---"},   {'P', ".--."},
        {'Q', "--.-"},  {'R', ".-."},   {'S', "..."},   {'T', "-"},
        {'U', "..-"},   {'V', "...-"},  {'W', ".--"},   {'X', "-..-"},
        {'Y', "-.--"},  {'Z', "--.."},
        {' ', "/"} // Space between words
    };

    string input;
    cout << "Enter a message to convert to Morse code: ";
    getline(cin, input);

    cout << "\nMorse Code:\n";
    for (char c : input) {
        c = toupper(c); // Convert character to uppercase
        if (morseCode.find(c) != morseCode.end()) {
            cout << morseCode[c] << " ";
        } else {
            cout << "? "; // Unknown character
        }
    }

    cout << endl;
    return 0;
}
