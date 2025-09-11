#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int val = 11+2*i;
        for(int j=0;j<n;j++)
        {
            cout << val << " ";
            val+=2;
        }
        cout << "\n";
    }
    return 0;
}

//그냥 2i+2j+11을 출력해도 됨.