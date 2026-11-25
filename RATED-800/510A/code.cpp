#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<char>> matrix(n, vector<char>(m, '.'));

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            matrix[i][j] = '.';
        }
    }
    
    bool right = true;
    bool right_done = false;
    
    for(int r=0 ; r<n ; r++){
        for(int c=0 ; c<m ; c++){
            if(r%2 == 0){
                matrix[r][c] = '#';
            }
            else{
                if(right == true && c == m-1){
                    matrix[r][c] = '#';
                    right_done = true;
                }
                
                if(right == false && c == 0){
                    matrix[r][c] = '#';
                    right_done = false;
                }
            }
        }
        if(right_done) right = false;
        else right = true;
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}