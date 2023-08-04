#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream inputFile("вихідний_файл.txt");
    ofstream outputFile("цільовий_файл.txt");

    if (!inputFile || !outputFile) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    string line;
    bool foundLastLineWithoutSpace = false;

    while (getline(inputFile, line)) {
        if (line.find(' ') == string::npos) {
            foundLastLineWithoutSpace = true;
        }

        outputFile << line << endl;
    }

    if (!foundLastLineWithoutSpace) {
        outputFile << "------------" << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Рядок з дванадцятьма рисками успішно доданий у інший файл!" << endl;

    return 0;
}
