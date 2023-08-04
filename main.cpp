#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
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

    vector<string> lines;

    string line;
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    reverse(lines.begin(), lines.end());

    for (const string& reversedLine : lines) {
        outputFile << reversedLine << endl;
    }

    inputFile.close();
    outputFile.close();

    cout << "����� ������ ��������� � ����������� ������� � ����� ����!" << endl;

    return 0;
}
