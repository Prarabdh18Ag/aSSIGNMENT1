#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter row size: ";
    cin>>row;
    cout<<"Enter column size: ";
    cin>>column;
    vector<vector<int>> matrix(row, vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=i;j<column;j++){
            swap(matrix[j][i],matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}
