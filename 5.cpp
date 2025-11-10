#include <iostream>
#include <cstring>
using namespace std;
int countWords(char str[]) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && !inWord) {
            count++;
            inWord = true;
        } 
        else if (str[i] == ' ') {
            inWord = false;
        }
    }
    return count;
}

int main() {
    char str[100];

    cout << "Enter a sentence: ";
    cin.getline(str, 100);
    cout << "Number of words: " << countWords(str);
    return 0;
}
