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
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();
    
    int lw = 0,rw = W-1;
    int uh = 0,dh = H-1;
    
    // game loop
    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();
        
        
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        if(bombDir[0] == 'U')dh = Y0-1;
        if(bombDir[0] == 'D')uh = Y0+1;
        
        if(bombDir[0] == 'R' || bombDir == "UR" || bombDir == "DR")lw = X0+1;
        if(bombDir[0] == 'L' || bombDir == "UL" || bombDir == "DL")rw = X0-1;
        
        X0 = (rw+lw)/2;
        Y0 = (uh+dh)/2;

        // the location of the next window Batman should jump to.
        cout << X0 << " " << Y0 << endl;
    }
}
