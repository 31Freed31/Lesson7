#include <iostream>

using namespace std;

int main() {
    int totalLength, exclamationCount;

    cout << "Введите общую длину колонтитула: ";
    cin >> totalLength;

    cout << "Введите количество восклицательных знаков: ";
    cin >> exclamationCount;

    if (exclamationCount > totalLength) 
    {
        cout << "Ошибка: количество восклицательных знаков не может быть больше длины строки." << endl;
    }

    int spacesTotal = totalLength - exclamationCount;
    int spacesLeft = spacesTotal / 2;
    int spacesRight = spacesTotal - spacesLeft;

    for (int i = 0; i < spacesLeft; i++) 
    {
        cout << "~";
    }

    for (int i = 0; i < exclamationCount; i++)
    {
        cout << "!";
    }

    for (int i = 0; i < spacesRight; i++) 
    {
        cout << "~";
    }

    cout << endl;
}
