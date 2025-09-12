#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[10];
    int arr_cnt[6]={0, 0, 0, 0, 0, 0};
    for(int i=0;i<10;i++)
    {    
        cin >> arr[i];
        arr_cnt[arr[i]-1]++;
    }

    for(int i=0;i<6;i++)
        cout << i+1 << " - " << arr_cnt[i] << "\n";
    
    return 0;
}