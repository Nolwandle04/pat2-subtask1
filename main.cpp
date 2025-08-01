#include <iostream>
#include <map>
using namespace std;

int main() {
    map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}, {' ', "/"}
    };
    return 0;
}
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<char, string> morseCode = { /* same as above */ };

    string input;
    cout << "Enter a message to convert to Morse code: ";
    getline(cin, input);

    return 0;
}
for (char c : input) {
    c = toupper(c);
}
