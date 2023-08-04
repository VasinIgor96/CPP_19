#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream inputFile("��������_����.txt");
    ofstream outputFile("��������_����.txt");

    if (!inputFile || !outputFile) {
        cout << "������� �������� �����!" << endl;
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

    cout << "����� � ������������ ������� ������ ������� � ����� ����!" << endl;

    return 0;
}
