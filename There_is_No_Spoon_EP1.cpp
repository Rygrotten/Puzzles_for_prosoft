#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/

int main()
{
    int width; // the number of cells on the X axis
    cin >> width; cin.ignore();
    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();
    string grid[30];
    for (int i = 0; i < height; i++) {
        getline(cin, grid[i]);// width characters, each either 0 or .
    }

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (grid[y][x] == '0') {
                int x1 = x;
                int y1 = y;
                int x2 = -1, y2 = -1;
                for (int nx = x + 1; nx < width; nx++) {
                    if (grid[y][nx] == '0') {
                        x2 = nx;
                        y2 = y;
                        break;
                    }
                }
                int x3 = -1, y3 = -1;
                for (int ny = y + 1; ny < height; ny++) {
                    if (grid[ny][x] == '0') {
                        x3 = x;
                        y3 = ny;
                        break;
                    }
                }
                cout << x1 << " " << y1 << " "
                     << x2 << " " << y2 << " "
                     << x3 << " " << y3 << endl;
            }
        }
    }
}