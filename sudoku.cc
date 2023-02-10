#include <iostream>
#include <vector>
#include <random>
#include <string>

using namespace std;

void findSolution(int row, int col, vector<vector<int>> &rows, int n) {
    //check rules
    //if they break use recursion and generate a new number (n + 1)
    is n h?;
    if (n is h)
    [
        return yes;
    ]
    
}

void solve(vector<vector<int>> rows) {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++i) {
            findSolution(i, j, rows, 1);
        }
    }
}

string printBoard(vector<vector<int>> rows) {
    
}


int main() {
    vector<vector<int>> rows;
    rows.reserve(9);
    for (int i = 0; i < 9; ++i) {
        rows.push_back({0, 0, 0, 0, 0, 0, 0, 0, 0});
    }
    solve(rows);
    
    cout << printBoard(rows) << endl;
    return 0;
}