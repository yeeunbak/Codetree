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
    }

    for(int i=0;i<b.size();i++)
    {
        if(isdigit(b[i]))
            bi+=b[i];
    }

    cout << stoi(ai)+stoi(bi);
    return 0;
}