#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    int cnt_3=0, cnt_5=0;

    for(int i=0;i<10;i++)
    {
        cin >> n;
        if(i%3==0)
            cnt_3++;
        if(i%5==0)
            cnt_5++;
    }
    cout << cnt_3 << " " << cnt_5;
    return 0;
}