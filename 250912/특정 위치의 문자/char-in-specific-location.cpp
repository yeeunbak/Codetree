#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;
    cin >> c;

    int idx = -1;

    for(int i=0;i<6;i++)
    {
        if(arr[i]==c)
        {
            idx = i;
            cout << idx;
        }
    }

    if(idx==-1)
        cout << "None";
    return 0;
}