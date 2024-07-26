#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    const int room_width = 15;
    const int room_length = 20;
    int x = room_width / 2;
    int y = room_length / 2;
    char command;

    cout << "Марсоход находится на позиции " << x << ", " << y << endl;

    while (true) {
        cout << "Введите команду (W - север, S - юг, A - запад, D - восток, Q - выход): ";
        cin >> command;

        if (command == 'Q' || command == 'q') {
            cout << "Программа завершена." << endl;
            break;
        }

        if (command == 'W' || command == 'w') {
            if (y < room_length) {
                y++;
            }
            else {
                cout << "Марсоход достиг северной стены." << endl;
            }
        }
        else if (command == 'S' || command == 's') {
            if (y > 1) {
                y--;
            }
            else {
                cout << "Марсоход достиг южной стены." << endl;
            }
        }
        else if (command == 'A' || command == 'a') {
            if (x > 1) {
                x--;
            }
            else {
                cout << "Марсоход достиг западной стены." << endl;
            }
        }
        else if (command == 'D' || command == 'd') {
            if (x < room_width) {
                x++;
            }
            else {
                cout << "Марсоход достиг восточной стены." << endl;
            }
        }
        else {
            cout << "Некорректная команда, попробуйте снова." << endl;
        }

        cout << "Марсоход находится на позиции " << x << ", " << y << endl;
    }
}
