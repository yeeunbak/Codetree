#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    for(int i=0;i<100;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]%2!=0)
                    cout << arr[j]+3 << " ";
                else
                    cout << arr[j]/2 << " ";
            }
            break;
        }
    }
    return 0;
}