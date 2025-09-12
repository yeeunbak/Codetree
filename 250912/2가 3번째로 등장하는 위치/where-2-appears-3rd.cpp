#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int arr[100];
    int pos = 0;
    int cnt = 0;
    
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==2)
        {
            cnt++;
            if(cnt==3)
            {
                pos = i+1;
                break;
            }

        }
    }

    cout << pos;
    return 0;
}