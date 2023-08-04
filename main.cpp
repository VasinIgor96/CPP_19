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
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "Рядки успішно переписані в інший файл!" << endl;

    return 0;
}
