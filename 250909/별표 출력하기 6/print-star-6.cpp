#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int cnt=0;
    for(int i=0;i<2*n-1;i++)
    {
        if(i<n)
        {
            for(int j=0;j<cnt;j++)
                cout << "  "; 
            for(int j=0;j<2*n-2*i-1;j++)
                cout << "* ";
            cnt++;
        }
        else
        {
            for(int j=0;j<cnt-2;j++)
                cout << "  ";
            for(int j=0;j<2*i-2*n+3;j++)
                cout << "* ";
            cnt--;
        }
        cout << "\n";
    }
    return 0;
}