#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int input=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> input;
        if(input%2!=0 && input%3==0)
            cout << input << "\n";
    }
    return 0;
}