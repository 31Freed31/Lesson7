#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");

    cout << "Введите ширину и высоту рамки: ";
    int width, height;
    cin >> width >> height;

    cout << "|";
    for (int i = 0; i < width - 2; i++) 
    {
        cout << "-";
    }
    cout << "|" << endl;

    for (int i = 0; i < height - 2; i++) 
    {
        cout << "|";
        for (int j = 0; j < width - 2; j++) 
        {
            cout << " ";
        }
        cout << "|" << endl;
    }

    cout << "|";
    for (int i = 0; i < width - 2; i++) 
    {
        cout << "-";
    }
    cout << "|" << endl;
}
