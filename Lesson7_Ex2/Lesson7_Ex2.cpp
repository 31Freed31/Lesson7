#include <iostream>
using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    int water, milk;
    cout << "Введите количество воды в мл: ";
    cin >> water;
    cout << "Введите количество молока в мл: ";
    cin >> milk;

    const int WATER_FOR_AMERICANO = 300;
    const int WATER_FOR_LATTE = 30;
    const int MILK_FOR_LATTE = 270;

    int americano_count = 0;
    int latte_count = 0;

    while (true) {
        cout << "Выберите напиток (1 — американо, 2 — латте): ";
        int choice;
        cin >> choice;

        if (choice == 1) {
            if (water >= WATER_FOR_AMERICANO) {
                water -= WATER_FOR_AMERICANO;
                americano_count++;
                cout << "Ваш напиток готов." << endl;
            }
            else {
                cout << "Не хватает воды." << endl;
            }
        }
        else if (choice == 2) {
            if (water >= WATER_FOR_LATTE && milk >= MILK_FOR_LATTE) {
                water -= WATER_FOR_LATTE;
                milk -= MILK_FOR_LATTE;
                latte_count++;
                cout << "Ваш напиток готов." << endl;
            }
            else if (water < WATER_FOR_LATTE) {
                cout << "Не хватает воды." << endl;
            }
            else {
                cout << "Не хватает молока." << endl;
            }
        }
        else {
            cout << "Некорректный выбор." << endl;
        }
        if (water < WATER_FOR_AMERICANO && (water < WATER_FOR_LATTE || milk < MILK_FOR_LATTE)) {
            cout << "***Отчёт***" << endl;
            cout << "Ингредиентов осталось:" << endl;
            cout << "Вода: " << water << " мл" << endl;
            cout << "Молоко: " << milk << " мл" << endl;
            cout << "Кружек американо приготовлено: " << americano_count << endl;
            cout << "Кружек латте приготовлено: " << latte_count << endl;
            break;
        }
    }
}

