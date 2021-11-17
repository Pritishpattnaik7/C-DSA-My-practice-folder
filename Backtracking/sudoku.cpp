#include <bits/stdc++.h>
using namespace std;

bool isValid(int** board , int x , int y , int n , int val)
{
    for (int col=0 ; col<n ; col++)
    {
        if (board[x][col] == val){
            return false;
        }
    }
    for (int row=0 ; row<n ; row++)
    {
        if (board[row][y] == val){
            return false;
        }
    }

    int smi = x/3 * 3;
    int smj = y/3 * 3;
    for (int i=0 ; i<3 ; i++)
    {
        for (int j=0 ; j<3 ; j++)
        {
            if (board[smi][smj] == val){
                return false;
            }
        }
    }
    return true;

}

bool solveSudoku(int** board , int i , int j , int n)
{
    if (i == n-1){
        return true;
    }
    int ni = 0;
    int nj = 0;
    if (j == n-1){
        ni = ni+1;
        nj = 0;
    }
    else{
        ni = i;
        nj = j+1;
    }
    
    if (board[i][j] != 0){
        solveSudoku(board , ni , nj , n);
    }
    else
    {
        for (int po=1 ; po<=9 ; po++)
        {
            if (isValid(board , ni , nj , n , po))
            {
                board[i][j] = po;
                solveSudoku(board , ni , nj , n);
                return true;
            }
            board[i][j] = 0;                    //backtracking
            return false;
        }
    }

    return false;
}

int main()
{
    int n;
    cout << "enter the size of the board : ";
    cin >> n;

    int** board = new int*[n];
    for (int i=0 ; i<n ; i++)
    {
        board[i] = new int[n];
    }
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin >> board[i][j];
        }
    }

    if (solveSudoku(board , 0 , 0 , n))
    {
        for (int i=0 ; i<n ; i++)
        {
            for (int j=0 ; j<n ; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}