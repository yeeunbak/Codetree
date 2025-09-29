#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cnt = 0;

    string arr[200];
    for(int i=0;i<200;i++)
    {
        string str;
        cin >> str;

        if(str=="0")
        {   
            cout << cnt << "\n";
            break;
        }
        arr[i]=str;
        cnt++;
    }

    for(int i=0;i<cnt;i+=2)
        cout << arr[i] << "\n";
    return 0;
}