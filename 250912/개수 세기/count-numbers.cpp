#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;

    int arr[100];
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==m)
            cnt++;
    }

    cout << cnt;
    return 0;
}