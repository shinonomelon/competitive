#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main(){
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    vector<string> grid(H);
    for(int i = 0; i < H; i++){
        cin >> grid[i];
    }

    string T;
    cin >> T;

    set<pair<int,int>> visited;

    int x = X - 1;
    int y = Y - 1;

    auto canMove = [&](int nx, int ny){
        if(nx < 0 || nx >= H || ny < 0 || ny >= W) return false;
        if(grid[nx][ny] == '#') return false;
        return true;
    };

    if(grid[x][y] == '@'){
        visited.insert({x, y});
    }

    for(char c : T){
        int nx = x, ny = y;
        if(c == 'U'){
            nx = x - 1;
            ny = y;
        }
        else if(c == 'D'){
            nx = x + 1;
            ny = y;
        }
        else if(c == 'L'){
            nx = x;
            ny = y - 1;
        }
        else if(c == 'R'){
            nx = x;
            ny = y + 1;
        }

        if(canMove(nx, ny)){
            if(grid[nx][ny] == '@'){
                visited.insert({nx, ny});
            }
            x = nx;
            y = ny;
        }
        else {
            if(grid[x][y] == '@'){
                visited.insert({x, y});
            }
        }
    }

    cout << (x+1) << " " << (y+1) << " " << visited.size() << endl;

    return 0;
}
