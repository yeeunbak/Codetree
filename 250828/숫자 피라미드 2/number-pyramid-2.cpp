#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int cnt=0;

    for(int i=1;i<=N;i++)           // N = 1 2 3 4
    {
        for(int j=0;j<i;j++)        
        {
            cnt++;
            cout<< cnt << " ";
        }
        cout<<"\n";
    }
    return 0;
}

//행    숫자
// N=1  j=0
// N=2  j=0 1
// N=3  j=0 1 2
// N=4  j=0 1 2 3
