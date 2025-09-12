#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100];
    int arr_cnt[10] = { };

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        arr_cnt[arr[i]]++;
    }

    for(int i=1;i<10;i++)
        cout << arr_cnt[i] << "\n";

    return 0;
}