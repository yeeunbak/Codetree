#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    string tot_str;
    for(int i=0;i<n;i++)
    {
        string str;
        cin >> str;
        tot_str+=str;
    }

    for(int i=0;i<tot_str.length();i++)
    {
        if(i%5==0 && i!=0)
            cout << "\n";
        cout << tot_str[i];
    }
    return 0;
}