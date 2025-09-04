#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    
    for(int i=a;a<=b;i++)
    {
        if(a%2!=0)
        {
            cout << a << " ";
            a*=2;
        }
        else
        {
            cout << a << " ";
            a+=3;
        }
            
    }
    return 0;
}