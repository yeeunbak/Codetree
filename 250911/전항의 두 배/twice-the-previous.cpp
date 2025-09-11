#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a0, a1;
    cin >> a0 >> a1;

    int arr[100];
    arr[0]=a0;
    arr[1]=a1;

    for(int i=2;i<10;i++)
        arr[i] = arr[i-1] + 2*arr[i-2];

    for(int i=0;i<10;i++)
        cout << arr[i] << " ";
    
    return 0;
}