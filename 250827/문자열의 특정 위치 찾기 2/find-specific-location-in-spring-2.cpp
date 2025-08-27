#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string fruit[5] = {"apple", "banana", "grape", "blueberry", "orange"};

    char c;
    cin >> c;

    int cnt=0;

    for(int i=0;i<5;i++)
    {   
        if((fruit[i][2]==c) || (fruit[i][3]==c))
        {
            cout << fruit[i] << "\n";
            cnt++;
        }

    }  

    cout << cnt;
    return 0;
}