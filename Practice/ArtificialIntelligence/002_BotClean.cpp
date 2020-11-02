#include<iostream>
#include<vector>
#include <algorithm>
#include <math.h>
using namespace std;

struct point {
    int x;
    int y;
    float dist;
};

bool sort_func (point first, point second)  { return (first.dist < second.dist && first.x < second.x && first.y < second.y); }

char at_position(int x, int y, vector<string> board){
    return board.at(y)[x];
}

vector<point> get_positions(int posr, int posc, vector<string> board){
    vector<point> distanced_positions = vector<point>();

    int botX = 0, botY = 0;

    for (int y = 0; y < board.size(); y++){
        string line = board.at(y);
        for (int x = 0; x < line.size(); x++){
            if (line[x] == 'b'){
                botX = x;
                botY = y;
                break;
            }
        }

        if (botX > 0)
            break;
    }

    for (int y = 0; y < board.size(); y++){
        string line = board.at(y);

        for (int x = 0; x < line.size(); x++){
            if (line[x] == 'd'){
                //int distance = abs(botX - x) + abs(botY - y);
                float distance = sqrt((botX + x) ^2 + (botY - y) ^2);
                point data = {x, y, distance};
                distanced_positions.push_back(data);
            }
        }
    }

    std::sort (distanced_positions.begin(), distanced_positions.end(), sort_func);

    return distanced_positions;
}

void move_to_point(int* fromX, int* fromY, int toX, int toY){
    if(*fromX < toX){
        *fromX++;
        cout << "RIGHT" << endl;
    }else if(*fromX > toX){
        *fromX--;
        cout << "LEFT" << endl;
    }else if(*fromY < toY){
        *fromY++;
        cout << "DOWN" << endl;
    }else if(*fromY > toY){
        *fromY--;
        cout << "UP" << endl;
    }
}

void next_move(int posr, int posc, vector<string> board) {
    vector<point>dist_pos = get_positions(posr, posc, board);
    point pos = dist_pos.front();

    if(at_position(posc, posr, board) == 'd')
        cout << "CLEAN" << endl;
    else
        move_to_point(&posc, &posr, pos.x, pos.y);
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
