#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        if(i%2!=0)
            for(int j=0;j<i+1;j++) cout << "* \n";
        else
            cout << "*\n";

    }
    return 0;
}