#include <iostream>

using namespace std;

int main() {
    int width = 21;
    int height = 11;
    int centerX = width / 2;
    int centerY = height / 2;

    for (int y = 0; y < height; ++y) 
    {
        for (int x = 0; x < width; ++x) 
        {
            if (x == centerX && y == centerY)
            {
                cout << "+";
            }
            else if (x == centerX && y == 0) 
            {
                cout << "^";
            }
            else if (y == centerY && x == width - 1)
            {
                cout << ">";
            }
            else if (x == centerX)
            {
                cout << "|";
            }
            else if (y == centerY) 
            {
                cout << "-";
            }
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
