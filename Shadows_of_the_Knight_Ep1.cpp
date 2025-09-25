#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x0;
    int y0;
    cin >> x0 >> y0; cin.ignore();

    int xmin = 0, ymin = 0;
    int xmax = w - 1, ymax = h - 1;

    // game loop
    while (1) {
        string bomb_dir; 
        cin >> bomb_dir; cin.ignore();
        if (bomb_dir.find('U') != string::npos) {
            ymax = y0 - 1;
        } else if (bomb_dir.find('D') != string::npos) {
            ymin = y0 + 1;
        }
        if (bomb_dir.find('L') != string::npos) {
            xmax = x0 - 1;
        } else if (bomb_dir.find('R') != string::npos) {
            xmin = x0 + 1;
        }
        x0 = (xmin + xmax) / 2;
        y0 = (ymin + ymax) / 2;
        cout << x0 << " " << y0 << endl;
    }
}
