#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

bool isWordLongEnough(const string& word) {
    return word.length() >= 7;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    ifstream inputFile(inputFilename);
    if (!inputFile) {
        cout << "������� ��� ������� �������� �����!" << endl;
        return 1;
    }

    ofstream outputFile(outputFilename);
    if (!outputFile) {
        cout << "������� ��� �������� ��� ������� ��������� �����!" << endl;
        return 1;
    }


    string word;
    while (inputFile >> word) {
        if (isWordLongEnough(word)) {
            outputFile << word << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "������ ���������. ���������� ����������� � ���� \"" << outputFilename << "\"" << endl;

    return 0;
}
