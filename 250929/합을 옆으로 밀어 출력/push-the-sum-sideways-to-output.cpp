#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        sum += num;
    }

    string str = to_string(sum);
    string ans = str.substr(1, str.size()-1) + str.substr(0, 1);
    cout << ans;
    return 0;
}