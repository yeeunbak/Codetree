#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;
    cin >> str;
    int cnt = str.size();
    
    for(int i=0;i<cnt;i++)
    {
        int n;
        cin >> n;

        if(n>str.size()-1)
            str.erase(str.size()-1 ,1);
        else
            str.erase(n, 1);
        cout << str << "\n";
    }
    return 0;
}