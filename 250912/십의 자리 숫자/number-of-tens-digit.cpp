#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100];
    int arr_cnt[10]={}; //i= 0 1 2 3 4 5 6 7 8 9
    
    int cnt = 0;

    for(int i=0;i<100;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            break;
        cnt++;
    }

    for(int i=0;i<cnt;i++)
    {
        if(arr[i]>10)
            arr_cnt[(arr[i]/10)-1]++;
    }
    
    for(int i=0;i<9;i++)
        cout << i+1 << " - " << arr_cnt[i] << "\n";
    
    return 0;
}