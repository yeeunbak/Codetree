#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
                cout << "* ";
            else if(j<i)
            {
                for(j=0;j<i-1;j++)
                    cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}