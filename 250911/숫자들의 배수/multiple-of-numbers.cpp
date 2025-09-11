#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    int cnt = 0;
    int arr[10];

    for(int i=0;i<10;i++)
    {
        arr[i] = n*(i+1);
        if(arr[i]%5==0)
            cnt++;   
        cout << arr[i] << " ";
        if(cnt==2)
            break; 
    }
    return 0;
}