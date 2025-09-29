#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string a, b;
    cin >> a >> b;

    string ai, bi;

    for(int i=0;i<a.size();i++)
    {
        if(isdigit(a[i]))
            ai+=a[i];
        else
            break;
    }
    for(int i=0;i<b.size();i++)
    {
        if(isdigit(b[i]))
            bi+=b[i];
        else
            break;
    }

    cout << stoi(ai) + stoi(bi);
    return 0;
}