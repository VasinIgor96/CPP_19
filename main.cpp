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
    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "����� ������ ��������� � ����� ����!" << endl;

    return 0;
}
