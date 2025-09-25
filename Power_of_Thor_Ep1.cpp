#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    int tx = initial_tx;
    int ty = initial_ty;

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();
        if (tx == light_x && ty == light_y) {
            return 0;
        }
        string move = "";
        if (light_y < ty) {
            move += "N";
            ty -= 1;
        } else if (light_y > ty) {
            move += "S";
            ty += 1;
        }
        if (light_x < tx) {
            move += "W";
            tx -= 1;
        } else if (light_x > tx) {
            move += "E";
            tx += 1;
        }
        cout << move << endl;
    }
}
