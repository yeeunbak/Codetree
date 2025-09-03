#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char cor;
    int t;
    int cnt=0;

    for(int i=0;i<3;i++)
    {
        cin >> cor >> t;
        if((cor=='Y') && (t>=37))
            cnt++;
    }

    if(cnt>=2)
        cout << "E";
    else
        cout << "N";

    return 0;
}