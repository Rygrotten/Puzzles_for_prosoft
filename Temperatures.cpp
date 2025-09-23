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
    int n; // the number of temperatures to analyse
    cin >> n;
    if (n==0){
        cout<<0;
        return 0;
    }
    int ans = 5527;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t;
        if( abs(t) < abs(ans)){
            ans = t;
        }
        else if ( abs(t) == abs(ans) && t > ans){
            ans = t;
        }

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << ans << endl;
}
