#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    string str[10]={};
    string total_str;
    for(int i=0;i<n;i++)
    {
        cin >> str[i];
        total_str += str[i];
    }
    cout << total_str;
    return 0;
}