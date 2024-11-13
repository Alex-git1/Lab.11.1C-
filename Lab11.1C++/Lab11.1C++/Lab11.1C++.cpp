#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

bool hasThreeConsecutiveExclamations(const string& line) {
    for (size_t i = 0; i < line.length() - 2; i++) {
        if (line[i] == '!' && line[i + 1] == '!' && line[i + 2] == '!') {
            return true;
        }
    }
    return false;
}

bool checkFileForExclamations(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Unable to open file: " << filename << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        if (hasThreeConsecutiveExclamations(line)) {
            file.close();
            return true; 
        }
    }

    file.close();
    return false;  
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string filename = "t.txt";

    if (checkFileForExclamations(filename)) {
        cout << "The file contains three consecutive exclamation marks '!!!'." << endl;
    }
    else {
        cout << "No three consecutive exclamation marks '!!!' found in the file." << endl;
    }

    return 0;
}
