#include <bits/stdc++.h>
using namespace std;
 
int ways=0;
bool isSafe(vector<vector<char>> &board,int r,int c){
    for(int i=r;i>=0;i--){
        if(board[i][c]=='Q')//straight upwards
        return false;
    }
    for(int i=r,j=c;i>=0 && j>=0;i--,j--){//diagonal left
        if(board[i][j]=='Q')
        return false;
    }
    for(int i=r,j=c;i>=0 && j<8;i--,j++){//diagonal right
        if(board[i][j]=='Q')
        return false;
    }
    return true;
}
void findways(int row,vector<vector<char>> &board)
{
    if(row==8){
        ways++;
        return;
    }
    for (int col=0;col<8;col++)
    {
        if (board[row][col]=='.')
        {
            if(isSafe(board,row,col)){
            board[row][col]='Q';
            findways(row+1,board);
            board[row][col]='.';
            }
        }
    }
}
int main()
{
    vector<vector<char>> board(8, vector<char>(8));
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> board[i][j];
        }
    }
    findways(0,board);
    cout<<ways;
    return 0;
}