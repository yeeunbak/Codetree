#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    
    for(int i=0;i<10;i++)
        cin >> arr[i];

    int max=arr[0];

    for(int i=0;i<10;i++)
    {
        if(arr[i]>max)
            max = arr[i];
    }
    cout << max;
    return 0;
}