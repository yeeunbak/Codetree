#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string arr[10];
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+= arr[i].length();
        if(arr[i][0]=='a')
            cnt++;
    }
    cout << sum << " " << cnt;
    return 0;
}