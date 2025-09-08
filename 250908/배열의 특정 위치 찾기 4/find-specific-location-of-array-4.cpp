#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int cnt=0;
    int sum=0;
    for(int i=0;i<10;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            break;
        else if(arr[i]!=0 && arr[i]%2==0)
        {
            sum+=arr[i];
            cnt++;
        }
    }
    cout << cnt << " " << sum;
    return 0;
}