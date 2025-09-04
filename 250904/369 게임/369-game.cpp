#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        if((i%3==0) || (i%10==3) || (i%10==6) || (i%10==9))
            cout << "0 ";
        else if((i>=30 && i<=39) || (i>=60 && i<=69) || (i>=90 && i<=99))
            cout << "0 ";
        else
            cout << i << " ";
    }
    return 0;
}