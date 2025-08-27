#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    
    
    int answer=0;

    for(int i=0;i<N-2;i++)
    {   
        for(int j=0;j<N-2;j++)
        {
            int cnt=0;
            
            for(int a=i;a<i+3;a++)
            {
                for(int b=j;b<j+3;b++)
                {
                    if(grid[a][b]==1)
                        cnt++;
                }
            }  

            //cnt가 전에 비해서 더 크면 바꾸는 걸로?
            if(answer<cnt)
                answer=cnt;

        }
    }

    cout << answer;
    

    // Please write your code here.

    return 0;
}
