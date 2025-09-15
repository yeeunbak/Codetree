#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;

    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<100;i++)
    {
        cin >> n;
        if(n==999 || n==-999)
            break;

        if(n>max)
            max = n;
        if(n<min)
            min = n;

    }
    cout << max << " " << min;
    return 0;
}