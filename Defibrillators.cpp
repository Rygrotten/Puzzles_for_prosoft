#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

double toDouble(string s) {
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ',') s[i] = '.'; // заменяем , на .
    }
    return stod(s);
}
/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string lon;
    cin >> lon; cin.ignore();
    string lat;
    cin >> lat; cin.ignore();
    int n;
    double Ulon = toDouble(lon) * M_PI / 180;
    double Ulat = toDouble(lat) * M_PI / 180;
    cin >> n; cin.ignore();
    string closest_name;
    double closest_dist = 1e18;
    for (int i = 0; i < n; i++) {
        string defib;
        getline(cin, defib);
        stringstream ss(defib);
        string field;
        string fields[6];
        int idx = 0;
        while (getline(ss, field, ';')) {
            fields[idx++] = field;
        }
        string name = fields[1];
        double lon = toDouble(fields[4]) * M_PI / 180.0;
        double lat = toDouble(fields[5]) * M_PI / 180.0;
        double x = (lon - Ulon) * cos((lat + Ulat) / 2.0);
        double y = (lat - Ulat);
        double d = sqrt(x * x + y * y) * 6371.0;
        if (d < closest_dist) {
            closest_dist = d;
            closest_name = name;
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    cout << closest_name << endl;
}