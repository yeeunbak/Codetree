#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char arr[10];

    for(int i=0;i<10;i++)
        cin >> arr[i];
    for(int i=0;i<10;i++)
        cout << arr[9-i];
    return 0;
}