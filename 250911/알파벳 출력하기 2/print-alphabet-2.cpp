#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    char x = 'A';

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
            cout << "  ";
        for(int j=0;j<n-i;j++)
        {
            cout << (char)(x) << " ";
            if(x=='Z')
                x='A';
            else
                x++;
        }
        cout << "\n";
    }
    return 0;
}