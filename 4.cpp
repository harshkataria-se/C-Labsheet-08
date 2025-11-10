#include <iostream>
#include <cstring>   
using namespace std;
void copyString(char dest[], const char source[]) {
    strcpy(dest, source);   
}
int main() {
    char str1[50], str2[50];

    cout << "Enter a string: ";
    cin.getline(str1, 50);   
    copyString(str2, str1);  
    cout << "Copied string: " << str2;
    return 0;
}
