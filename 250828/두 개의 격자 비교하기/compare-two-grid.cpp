#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int M, N;
    cin >> M >> N;

    int matrix1[M][N];
    int matrix2[M][N];

    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin >> matrix1[i][j];

    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            cin >> matrix2[i][j];

    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(matrix1[i][j]==matrix2[i][j])
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
            
        }
        cout << "\n"; 
    }
            
        
    
        
    return 0;
}