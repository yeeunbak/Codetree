#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string arr;
    int n;
    cin >> arr >> n;

    for(int i=arr.length()-1;i>=arr.length()-n;i--)
        cout << arr[i];
    return 0;
}