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

void nextMove(int n, int r, int c, vector <string> grid){
  int princessLoc[] = {0, 0};

  getLocation(princessLoc, 'p', n, grid);

  int xDiff = princessLoc[0] - c,
      yDiff = princessLoc[1] - r;

  if (xDiff < 0){
      xDiff++;
      cout << "LEFT" << endl;
  }else if (xDiff > 0){
      xDiff--;
      cout << "RIGHT" << endl;
  }else if (yDiff < 0){
      yDiff++;
      cout << "UP" << endl;
  }else if (yDiff > 0){
      yDiff--;
      cout << "DOWN" << endl;
  }
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
