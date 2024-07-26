#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Всего гречки было на начало подсчёта в кг: ";
    int buckwheat;
    cin >> buckwheat;
    
    int daysCount = 1;

    for (int i = buckwheat; i > 0; i-=4)
    {
        cout << "После " << daysCount++ << "  месяца у вас в запасе останется " << i << " кг гречки" << endl;
    }
    cout << "Гречка закончилась после " << daysCount - 1 << " месяцев." << endl;
}
