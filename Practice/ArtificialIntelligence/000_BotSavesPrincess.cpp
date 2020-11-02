#include <iostream>
#include <vector>
using namespace std;


void getLocation(int* locs, char person, int n, vector <string> grid){
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x < n; x++)
        {
            locs[0] = grid[y].find(person);
            if(locs[0] >= 0)
                break;
        }

        if(locs[0] >= 0)
        {
            locs[1] = y;
            break;
        }
    }
}

void displayPathtoPrincess(int n, vector <string> grid){
    int princessLoc[] = {0, 0};
    int botLoc[] = {0, 0};

    getLocation(princessLoc, 'p', n, grid);
    getLocation(botLoc, 'm', n, grid);

    int xDiff = princessLoc[0] - botLoc[0],
        yDiff = princessLoc[1] - botLoc[1];

    while( xDiff != 0){
        if (xDiff < 0){
            xDiff++;
            cout << "LEFT" << endl;
        }else{
            xDiff--;
            cout << "RIGHT" << endl;
        }
    }

    while( yDiff != 0){
        if (yDiff < 0){
            yDiff++;
            cout << "UP" << endl;
        }else{
            yDiff--;
            cout << "DOWN" << endl;
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
