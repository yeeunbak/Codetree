#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin >> N;

    int arr[N][N];

    for(int i=0;i<N;i++)            //열
    {
        if(i%2!=0)
        {
            int num=1;
            for(int j=N-1;j>=0;j--)    //행
            {   
                arr[j][i]=num;
                num++;
            }
        }
        else
        {
            for(int j=0;j<N;j++)
            {
                arr[j][i]=j+1;
            }
        }
        
    }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}