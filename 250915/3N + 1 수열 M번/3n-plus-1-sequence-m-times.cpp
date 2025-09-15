#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    
    int val;

    for(int i=0;i<n;i++)
    {
        cin >> val;
        int cnt = 0;
        while(val!=1)
        {
            if(val%2==0)
                val=/2;
            else
                val=(val*3)+1;
            cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}